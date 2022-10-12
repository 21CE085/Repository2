#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Uppercase to Lowercase
    char A = 'A';
    char a = A | (1 << 5);
    cout << a << endl;
    char aa = A | ' '; //' ' = (1<<5) ascii value of space
    cout << aa << endl;

    // Lowercase to Uppercase
    char b = 'b';
    char B = char(b & (~(1 << 5)));
    cout << B << endl;
    char BB = b & '_';
    cout << BB << endl;

    return 0;
}