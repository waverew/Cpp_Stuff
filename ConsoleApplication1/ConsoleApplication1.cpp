// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string reverseString(string arg) {
	for (int i = 0; i < size(arg) / 2; i++) {
		char temp = arg[i];
		arg[i] = arg[size(arg) - i - 1];
		arg[size(arg) - i - 1] = temp;

	}
	return arg;
}
int main() {
	string str1 = "123456";
	string str2 = "126534";
	cout << reverseString(str2) << endl;
	string rStr1 = reverseString(str1);
	string rStr2 = reverseString(str2);
	int s = size(rStr1) + size(rStr2);
	cout << s << endl;
	int* res;
	res = new int[s];
	/*for (int i = 0; i < size(rStr1); i++) {
		for (int j = 0; j < size(rStr2); j++) {

		}
	}
	*/

	for (int i = 0; i < s; i++) {
		cout << "Enter " << i << " element of array";
		cin >> res[i];
	}
	for (int i = 0; i < s; i++) {
		cout << res[i] << endl;
	}
	delete[] res;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
