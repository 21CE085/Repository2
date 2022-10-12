#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    float h[5]={11.223234,243.232,34.454,34.34,354.332};

    ofstream o;
    o.open("binary");
    o.write((char *) &h,sizeof(h));
    o.close();

    ifstream f;
    f.open("binary");
        f.read((char *) &h,sizeof(h));
    f.close();
    for(int i=0;i<5;i++)
    {
        cout<<fixed<<setprecision(2)<<h[i]<<endl;
    }
}
