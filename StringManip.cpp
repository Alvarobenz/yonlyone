/*
 * StringManip.c
 *
 *  Created on: Feb 11, 2015
 *      Author: Doug
 */

#include <iostream>
#include <string>

using namespace std;

string reverseString(string str);
bool isPalindrome(string str);
void LazyMan();

int main()
{
	LazyMan();
}

string reverseString(string str)
{
	string reversedStr;

	for(size_t i = 0; i < str.size(); i++)
	{
		reversedStr += str[str.size() - 1 - i];
	}
	return reversedStr;
}

bool isPalindrome(string str)
{

	for(size_t i = 0; i < str.size(); i++)
	{
		str[i] = tolower(str[i]);
	}

	if(str.compare(reverseString(str)) == 0)
		return true;
	else
		return false;
}

void LazyMan()
{
	string palin1 = "Anna";
		string palin2 = "rAcECaR";
		string palin3 = "Bobby";

		string reversed1 = reverseString(palin1);
		string reversed2 = reverseString(palin2);
		string reversed3 = reverseString(palin3);

		cout << reversed1 << endl;
		cout << reversed2 << endl;
		cout << reversed3 << endl;

		if(isPalindrome(palin1))
			cout << palin1 + " is a palindrome" << endl;
		else
			cout << palin1 + " is not a palindrome" << endl;

		if(isPalindrome(palin2))
			cout << palin2 + " is a palindrome" << endl;
		else
			cout << palin2 + " is not a palindrome" << endl;

		if(isPalindrome(palin3))
			cout << palin3 + " is a palindrome" << endl;
		else
			cout << palin3 + " is not a palindrome" << endl;
}


