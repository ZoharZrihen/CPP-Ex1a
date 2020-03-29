/*
 * author: Zohar Zrihen
 */
#include "PhoneticFinder.hpp"
#include <iostream>
#include <string>

using namespace std;
int count=0;
char LowerCase(char c){
	if(c>64 && c<91){
		return c+32;
	}
	return c;
}

namespace phonetic{
	string find(string text, string word){
		string swap[8]={"vw","bfp","gj","ckq","sz","dt","ou","iy"};
		while(text.length() > 0){
			string temp="";
			while(text[0]==' '|| text[0]=='\t'){
				text=text.substr(1);
			}
			while(text[0]!=' ' && text[0]!='\t' && text.length()>0){
				temp+=text[0];
				text=text.substr(1);
			}
			if(temp.length()==word.length()){
				string tword=word;
				string ans=temp;
				bool e=true;
				while(temp.length()>0&&e){
					char a=temp[0];
					char b=tword[0];
					temp=temp.substr(1);
					tword=tword.substr(1);
					a=LowerCase(a);
					b=LowerCase(b);
					if(a!=b){
						e=false;
						for(int i=0;i<8;i++){
							if(string::npos!=swap[i].find(a)&&string::npos!=swap[i].find(b)){
								e=true;
							}
						}
					}
				}
				if(e){
					return ans;
				}
			}
		}
		throw runtime_error("Could'nt find the word in the text");
	}
}
