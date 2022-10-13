#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Krish Rajesbhai Kanani";
    map<char, int> count;

    for (int i = 0; i < s.length(); ++i)
    {
        count[s[i]]++; // counting the duplicate.
    }

    for (auto it : count)
    {
        if (it.second > 1) // Check that the number is having its duplicate or not.
        {
            cout << it.first << " " << it.second << endl;
        }
    }

    cout << "Printing all the characters: " << endl;
    for (auto it : count)
    {
        cout << it.first << " " << it.second << endl;
    }
}