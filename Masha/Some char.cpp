#include "Some char.h"
#include <iostream>
#include <string>


istream& operator>>(istream& in, Some_char& ch) {
	in >> ch.chars;
	return in;
}
ostream& operator<<(ostream& out, const Some_char& ch) {
	return out << ch.chars;
}
Some_char& Some_char::operator= (const Some_char& ch) {
	//if (this != &ch)
	//{
	//	swap(chars, ch.chars);
	//}
	this->chars = ch.chars;
	return *this;
}
Some_char& Some_char::operator= (string ch) {
	this->chars = ch;
	return *this;
}
Some_char& Some_char::operator= (char ch) {
	this->chars = ch;
	return *this;
}

Some_char& Some_char::operator+=(Some_char& ch) {

	chars += ch.chars;
	return *this;
}
Some_char& Some_char::operator+=(string ch) {

	chars += ch;
	return *this;
}
Some_char& Some_char::operator+=(char ch) {

	chars += ch;
	return *this;
}

Some_char& Some_char::operator+ (const Some_char& ch) {
	Some_char te = ch.chars + this->chars;
	return te;
}
Some_char& Some_char::operator+ (const string ch) {
	Some_char te = ch + this->chars;
	return te;
}
Some_char& Some_char::operator+ (const char ch) {
	Some_char te = ch + this->chars;
	return te;
}

void Some_char::Set(string chars) {
	this->chars = chars;
}
void Some_char::Get() {
	cout << chars << endl;
}
void Some_char::Delete(string chars) {
	this->chars = chars;
}
