// #include "../Lab1/lab1/lab1.h"
#include "../catch2/catch.hpp"

#ifdef LAB1_TEST

TEST_CASE("Checking compareArray", "[qwerty]") {

	char* input = (char*)malloc(sizeof(char));
	char* expected = (char*)malloc(sizeof(char));
	int length;

	input = value(input, "+9++9++9+");
	expected = value(expected, "9+9+9+   ");
	length = 9;
	REQUIRE(!compareArray(input, expected, length));

}


TEST_CASE("Checking editArray", "[qwerty]") {

	char* input = (char*)malloc(sizeof(char));
	char* expected = (char*)malloc(sizeof(char));
	int length;

	input = value(input, "+9++9++9+");
	expected = value(expected, "9+9+9+   ");
	length = 9;
	editArray(input, length);
	REQUIRE(compareArray(input, expected, length));

	input = value(input, "+0+0+0+0+");
	expected = value(expected, "0000+    ");
	length = 9;
	editArray(input, length);
	REQUIRE(compareArray(input, expected, length));

	input = value(input, "");
	expected = value(expected, "");
	length = 0;
	editArray(input, length);
	REQUIRE(compareArray(input, expected, length));

	input = value(input, "+++++++++");
	expected = value(expected, "+++++++++");
	length = 9;
	editArray(input, length);
	REQUIRE(compareArray(input, expected, length));

}

TEST_CASE("Checking editString", "[qwerty]") {
	
	std::string input;
	std::string expected;

	input = "+0+0+0+0+";
	expected = "0000+";
	editString(input);
	REQUIRE(input == expected);

	input = "+9++9++9+";
	expected = "9+9+9+";
	editString(input);
	REQUIRE(input == expected);

	input = "+++++++++";
	expected = "+++++++++";
	editString(input);
	REQUIRE(input == expected);

	input = "";
	expected = "";
	editString(input);
	REQUIRE(input == expected);

	input = "123456789";
	expected = "123456789";
	editString(input);
	REQUIRE(input == expected);

}

#endif // DEBUG