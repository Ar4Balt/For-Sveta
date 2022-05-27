#pragma once
#include <iostream>
#include <string>

using namespace std;

class Some_char {
public:

	Some_char() : chars("") {

	}
	Some_char(Some_char& sh) {
		chars = sh.chars;
	}
	Some_char(string sh) {
		chars = sh;
	}
	~Some_char() {

	}


	friend istream& operator>>(istream& in, Some_char& ch);
	friend ostream& operator<<(ostream& out, const Some_char& ch);
	Some_char& operator= (const Some_char& ch);
	Some_char& operator= (string ch);
	Some_char& operator= (char ch);

	Some_char& operator+=(Some_char& ch);
	Some_char& operator+=(string ch);
	Some_char& operator+=(char ch);

	Some_char& operator+ (const Some_char& ch);
	Some_char& operator+ (const string ch);
	Some_char& operator+ (const char ch);

	void Set(string chars);
	void Get();
	void Delete(string chars);

private:
	string chars;

};
