/*
 * author: Zohar Zrihen
 */
#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;


TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));

}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "HAPpi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpi") == string("Happi"));
    CHECK(find(text, "HaPPI") == string("Happi"));
    CHECK(find(text, "HAppI") == string("Happi"));

}

TEST_CASE("Test replacement of s and z") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "seuz") == string("zeus"));
    CHECK(find(text, "zeus") == string("zeus"));
    CHECK(find(text, "zeuz") == string("zeus"));
    CHECK(find(text, "seuz") == string("zeus"));
    CHECK(find(text, "seus") == string("zeus"));
    CHECK(find(text, "seuz") == string("zeus"));
    CHECK(find(text, "zeus") == string("zeus"));
    CHECK(find(text, "seuz") == string("zeus"));
    CHECK(find(text, "seus") == string("zeus"));
    CHECK(find(text, "zeuz") == string("zeus"));

}

TEST_CASE("Test replacement of v and w") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "wavew") == string("wavew"));
    CHECK(find(text, "vavew") == string("wavew"));
    CHECK(find(text, "vavev") == string("wavew"));
    CHECK(find(text, "wawew") == string("wavew"));
    CHECK(find(text, "wawev") == string("wavew"));
    CHECK(find(text, "vavew") == string("wavew"));
    CHECK(find(text, "wawev") == string("wavew"));
    CHECK(find(text, "vawev") == string("wavew"));
    CHECK(find(text, "vawew") == string("wavew"));
    CHECK(find(text, "wavew") == string("wavew"));

}

TEST_CASE("Test replacement of g and j") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "janjag") == string("ganjag"));
    CHECK(find(text, "janjaj") == string("ganjag"));
    CHECK(find(text, "gangag") == string("ganjag"));
    CHECK(find(text, "gangaj") == string("ganjag"));
    CHECK(find(text, "ganjaj") == string("ganjag"));
    CHECK(find(text, "jangag") == string("ganjag"));
    CHECK(find(text, "jangaj") == string("ganjag"));
    CHECK(find(text, "ganjag") == string("ganjag"));
    CHECK(find(text, "jangag") == string("ganjag"));
    CHECK(find(text, "gangag") == string("ganjag"));

}

TEST_CASE("Test replacement of c and k") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "coolkk") == string("coolkk"));
    CHECK(find(text, "koolkk") == string("coolkk"));
    CHECK(find(text, "koolcc") == string("coolkk"));
    CHECK(find(text, "coolck") == string("coolkk"));
    CHECK(find(text, "coolkc") == string("coolkk"));
    CHECK(find(text, "coolcc") == string("coolkk"));
    CHECK(find(text, "koolkk") == string("coolkk"));
    CHECK(find(text, "koolkc") == string("coolkk"));
    CHECK(find(text, "koolck") == string("coolkk"));
    CHECK(find(text, "koolcc") == string("coolkk"));

}

TEST_CASE("Test replacement of d and t") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "dolltt") == string("dolltt"));
    CHECK(find(text, "dolldd") == string("dolltt"));
    CHECK(find(text, "dolldt") == string("dolltt"));
    CHECK(find(text, "dolltd") == string("dolltt"));
    CHECK(find(text, "tolltt") == string("dolltt"));
    CHECK(find(text, "tolldd") == string("dolltt"));
    CHECK(find(text, "tolltd") == string("dolltt"));
    CHECK(find(text, "tolldt") == string("dolltt"));
    CHECK(find(text, "dolltd") == string("dolltt"));
    CHECK(find(text, "tolldt") == string("dolltt"));

}

TEST_CASE("Test replacement of o and u") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "ourhour") == string("ourhour"));
    CHECK(find(text, "uurhuur") == string("ourhour"));
    CHECK(find(text, "uurhuor") == string("ourhour"));
    CHECK(find(text, "uurhour") == string("ourhour"));
    CHECK(find(text, "uurhoor") == string("ourhour"));
    CHECK(find(text, "uorhuur") == string("ourhour"));
    CHECK(find(text, "uorhoor") == string("ourhour"));
    CHECK(find(text, "uorhour") == string("ourhour"));
    CHECK(find(text, "uorhuor") == string("ourhour"));
    CHECK(find(text, "oorhour") == string("ourhour"));
    CHECK(find(text, "oorhoor") == string("ourhour"));
    CHECK(find(text, "oorhuor") == string("ourhour"));
    CHECK(find(text, "oorhour") == string("ourhour"));

}

TEST_CASE("Test replacement of i and y") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "dailyiy") == string("dailyiy"));
    CHECK(find(text, "dailiii") == string("dailyiy"));
    CHECK(find(text, "dailiiy") == string("dailyiy"));
    CHECK(find(text, "dailiyi") == string("dailyiy"));
    CHECK(find(text, "dailyiy") == string("dailyiy"));
    CHECK(find(text, "dailyii") == string("dailyiy"));
    CHECK(find(text, "dailyyy") == string("dailyiy"));
    CHECK(find(text, "dailyyi") == string("dailyiy"));
    CHECK(find(text, "daylyyi") == string("dailyiy"));
    CHECK(find(text, "daylyii") == string("dailyiy"));
    CHECK(find(text, "dayliii") == string("dailyiy"));
    CHECK(find(text, "dayliiy") == string("dailyiy"));
    CHECK(find(text, "dayliyi") == string("dailyiy"));

}

TEST_CASE("Test replacement of k and q") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "kaqkaq") == string("kaqkaq"));
    CHECK(find(text, "kakkak") == string("kaqkaq"));
    CHECK(find(text, "kakkaq") == string("kaqkaq"));
    CHECK(find(text, "kakqak") == string("kaqkaq"));
    CHECK(find(text, "kakqaq") == string("kaqkaq"));
    CHECK(find(text, "kaqqaq") == string("kaqkaq"));
    CHECK(find(text, "kaqkaq") == string("kaqkaq"));
    CHECK(find(text, "kaqqak") == string("kaqkaq"));
    CHECK(find(text, "kaqkaq") == string("kaqkaq"));
    CHECK(find(text, "qaqqaq") == string("kaqkaq"));

}



