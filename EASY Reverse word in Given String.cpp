//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    string reverseWords(string S)
    {
        vector<string> temp;
        string str;

        for (int i = 0; i < S.length(); i++)
        {

            if (S[i] == '.')
            {
                temp.push_back(str);
                str = "";
            }
            else
            {
                str += S[i];
            }
        }

        temp.push_back(str);
        str = "";

        for (int i = temp.size() - 1; i >= 0; i--)
        {
            str += temp[i];
            if (i == 0)
                break;
            str += '.';
        }

        return str;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}