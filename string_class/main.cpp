#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string s0;
	string s1{ "Apple" };
	string s2{ "Banana" };
	string s3{ "Kiwi" };
	string s4{ "apple" };
	string s5{ s1 }; // Apple
	string s6{ s1,0,3 }; // App
	string s7{ 10,'X' }; // XXXXXXXXXX

/*
	cout << s0 << endl;
	cout << s0.length() << endl;
*/

/*
	s1 = "Apple";
	for (size_t i{ 0 }; i < s1.size(); ++i)
		cout << s1.at(i);
	cout << endl;
*/

/*
	string full_name{};
	cout << "Enter your full name: ";
	getline(cin, full_name);
	cout << "Your full name is " << full_name << endl;
*/

/*
	s1 = "The secret word is Boo";
	string word{};

	cout << "Enter the word to find: ";
	cin >> word;

	size_t position = s1.find(word);
	if (position != string::npos)
		cout << "Found " << word << " at position: " << position << endl;
	else
		cout << "Sorry, " << word << " not found" << endl;

	cout << endl;
*/


	//string journal_entry_1{ "Isaac Newton" };
	//string journal_entry_2{ "Leibniz" };

	////----DO NOT MODIFY THE CODE ABOVE THIS LINE----
	////----WRITE YOUR CODE BELOW THIS LINE----

	//journal_entry_1.erase(0, 6);

	//if (journal_entry_2 < journal_entry_1)
	//	journal_entry_2.swap(journal_entry_1);

	//// THE FOLLOWING WILL ALSO WORK
	//if (journal_entry_1 > journal_entry_2)
	//	journal_entry_1.swap(journal_entry_2);
	//
	//cout << journal_entry_1 << "\n" << journal_entry_2;

	string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	string key{ "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm" };

	string text{};
	cout << "Give me a text: ";
	getline(cin, text);

	string encryption{};

	for (char c : text) {
		size_t position = alphabet.find(c);
		if (position != string::npos) {
			char new_char{ key.at(position) };
			encryption += new_char;
		}
		else
		{
			encryption += c;
		}
	}
		
	cout << "\nEncripted text is: " << encryption << endl;

	string decryption{};

	for (char c : encryption) {
		size_t position = key.find(c);
		if (position != string::npos) {
			char new_char = alphabet.at(position);
			decryption += new_char;
		}
		else
		{
			decryption += c;
		}
	}

	cout << "\nDecrypted text is: " << decryption << endl;

	cout << endl;

	return 0;
}