#include<iostream>
#include<string>
using namespace std;

bool Is_anagram(string x, string y)
{
	int Array[26];		//to  store values of ascii
	if (x.length() != y.length()) //length not same strings cannot be anagram
	{
		return false;
	}
	else
	{
		for (int i = 0; i < 26; i++)
		{
			Array[i] = 0;		//intializing array with 0
		}

		for (int i = 0; i < x.length(); i++)
		{
			Array[x[i] - 97] = 1;
		}

		for (int j = 0; j < x.length(); j++)
		{
			if (Array[y[j] - 97] != 1)
			{
				return false;
			}
		}

		return true;
	}
}


int main()
{
	string A, B;
	cout << "Please enter First string: ";
	getline(cin,A);

	cout << "Please enter Second string: ";
	getline(cin,B);

	if (Is_anagram(A, B))
	{
		cout << "The strings are Anagram!" << endl;
	}
	else
	{
		cout << "The strings are not Anagram!" << endl;
	}

}
