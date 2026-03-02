

#include <iostream>
using namespace std;
string reversestring(string str) {
    string result;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        result += str[i];
    }
    return result;
}

int main() {
    cout << reversestring("Areej") << endl;
    return 0;
}