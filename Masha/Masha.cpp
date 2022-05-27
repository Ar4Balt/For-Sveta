#include <iostream>
#include <iomanip>
#include <string>
#include "Some char.h"

using namespace std;

int main() {

	Some_char ch_1, ch_2("qwerty"), ch_3(ch_2);
	string s = "fghjcw ";
	char d = '*';

	cout << "Enter some word: ";
	cin >> ch_1;

	//Testing
	//	=
	ch_1 = ch_2;
	cout << endl << ch_1;
	ch_1.Delete("zxcvbbn");
	ch_1 = "klasgilsadg";
	cout << endl << ch_1;
	ch_1.Delete("zxcvbbn");
	ch_1 = '@';
	cout << endl << ch_1;
	ch_1.Delete("zxcvbbn");
	//	+
	ch_1 + ch_2;
	cout << endl << ch_1;
	ch_1.Delete("zxcvbbn");
	ch_1 + s;
	cout << endl << ch_1;
	ch_1.Delete("zxcvbbn");
	ch_1 + d;
	cout << endl << ch_1;
	ch_1.Delete("zxcvbbn");
	//	+=
	ch_1 += ch_2;
	cout << endl << ch_1;
	ch_1.Delete("zxcvbbn");
	ch_1 += s;
	cout << endl << ch_1;
	ch_1.Delete("zxcvbbn");
	ch_1 += d;
	cout << endl << ch_1;
	ch_1.Delete("zxcvbbn");

	cout << endl << ch_2;
	cout << endl << ch_3;


	cout << s + d;

	return 0;
}