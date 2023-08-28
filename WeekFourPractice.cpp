// WeekFourPractice.cpp 
// Joseph Rentfrow

#include <iostream>
#include <string> 
#include <map>
using namespace std;

int main()
{
	string mystring = "abcdefghij";

	for (int i = 0; i < mystring.length(); i++)
	{
		cout << mystring[i] << endl;
	}

	for (int j = mystring.length(); j >= 0; j--)
	{
		cout << mystring[j] << endl;
	}
	cout << endl;

	for (char c = 'a'; c <= 'j'; ++c)
	{
		cout << c << endl;
	}
	char myChars[10] = { 'a','b','c','d','e','f','g','h','i','j' };
	cout << "\nmy character should be... " << myChars[4] << endl;
	cout << "\nmy mychars is " << myChars << endl;

	for (int k = 0; k < 10; k++)
	{
		cout << "\n\n  mychars[" << k << "] is " << myChars[k] << "\n\n";
	}
	int num1 = 0;
	int num2 = 0;

	cout << "Enter in the first number: ";
	cin >> num1;
	cout << "Enter in the second number: ";
	cin >> num2;
	if (num1 > num2)
	{
		cout << "\n The first number is larger than the second number.";
	}
	else {
		cout << "\n The second number is larger than the first number." << "\n\n";
	}
	// create a hash map
	map <string, int> myDictionary01;
	myDictionary01.insert(pair <string, int>("a", 4));
	myDictionary01.insert(pair <string, int>("b", 3));
	myDictionary01.insert(pair <string, int>("c", 2));
	myDictionary01.insert(pair <string, int>("d", 5));

	for (auto pair : myDictionary01)
	{
		cout << pair.first << " - " << pair.second << endl;
	}
	// Increment the value of our keys
	myDictionary01["b"]++;
	myDictionary01["c"]++;
	myDictionary01["c"]++;
	cout << "\n\n";

	for (auto pair : myDictionary01)
	{
		cout << pair.first << " - " << pair.second << endl;

		return 0;

	}
}


