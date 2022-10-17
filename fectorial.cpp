#include<iostream>

using namespace std;

int fecto(int n){

    if(n==0)
    return 1;

    return n*fecto(n-1);
}

int main()
{
    int n;
    cin>>n;

    int ans= fecto(n);
    cout<<ans;
}