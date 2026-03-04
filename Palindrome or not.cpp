

#include <iostream>
#include<string>
using namespace std;

bool ispal(string wrd) {

	bool x = false;
	int y = wrd.length() / 2;
	
	for (int i = 0; i < y; i++)
	{
		
		for (int j = wrd.length() - 1; j > y; j--)
		{
		
			if (wrd[i] == wrd[j])
			{
				x = true;
			}
			else x = false;
		}
	}
	return x;
}
int main() {

	string wrd;
	cin >> wrd;
	bool x = ispal(wrd);
	if (x == true)
		cout << "Is Palindrome";
	else 
		cout<<"Is Not";

	return 0;
}
