

#include <iostream>
using namespace std;
char letr(char x)
{
    bool y;
    switch (x) {
    case 'a':
        y = true;
        break;
    case 'e':
        y = true;
        break;
    case 'o':
        y = true;
        break;
    case'u':
        y = true;
        break;
    case'i':
        y = true;
        break;
    case 'A':
        y = true;
        break;
    case 'E':
        y = true;
        break;
    case 'O':
        y = true;
        break;
    case'U':
        y = true;
        break;
    case'I':
        y = true;
        break;
    default: y = false;

    }
    if (y == 0)
        cout << "False";
    else
        cout << "true";

    return y;
}

int main() {
    char x;
    cin >> x;
    cout << letr(x) << endl;

    return 0;
}