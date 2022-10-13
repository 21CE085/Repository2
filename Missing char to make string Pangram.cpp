#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string checkPangram(string s){
    int arr[26] = {0};
    for(int i=0; i<s.length(); ++i){
        s[i] = tolower(s[i]);
    }

    for(int i=0; i<s.length(); ++i){
        int index = s[i] - 'a' ;

        arr[index]++;
    }

    string missing;

    for(int i=0; i<26; ++i){
        if(arr[i] == 0){
            missing += 'a'+i;
        }
    }

    return missing;

}

int main(){
    string s = "The quick brown fox jumps over the dog";
    string missing = checkPangram(s);

    cout<<missing;
}
