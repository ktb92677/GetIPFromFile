#include <iostream>
#include <string>
#include <iterator>
#include <regex>
#include <fstream>

using namespace std;

string s1, s, s2;

int main() {
	cout << "Please input the name of the file: ";
	getline(cin, s2);

	ifstream if_(s2.c_str());

	while (getline(if_, s1)) s += s1;

	cout << ((distance(sregex_iterator(s.begin(), s.end(), regex("(?:(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.){3}(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)")),
		sregex_iterator()) < 1) ? "Not found!" : sregex_iterator(s.begin(), s.end(),
		regex("(?:(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.){3}(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)"))->str()) << endl;

	return 0;
}
