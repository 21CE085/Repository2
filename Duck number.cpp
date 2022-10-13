#include<iostream>
using namespace std;
bool checkDuck(string s){
    int i=0, n=s.length();

    while(i<n && s[i] == '0')
        i++;

    while(i<n){
        if(s[i] == '0')
            return true;
        i++;
    }

    return false;
}
int main(){
    string s;
    cout<<"Enter the number string to check whether it is a Duck number or not: ";
    cin>>s;

    if(checkDuck(s))
        cout<<"Yes, it is a Duck number."<<endl;
    else
        cout<<"No, it is not a Duck number."<<endl;
}
