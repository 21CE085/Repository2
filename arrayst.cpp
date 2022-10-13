#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;


     /*-----------------------------------------------------------------*/

        /* FOR ROTATING A ARRAY
        int b=3;
        rotate(a,a+b,a+n);
         for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        */

      /*-----------------------------------------------------------------*/

        /* FOR REVERSING THE ARRAY
        reverse(a,a+n);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        */

        /*-----------------------------------------------------------------*/


        /* REMOVE AN ELEMENT
        remove(a,a+n,2);
        for(int i=0;i<n-1;i++)
        {
            cout<<a[i]<<" ";
        }
        */

        /*-----------------------------------------------------------------*/

        /* FOR DOING PERMUTATIONS
        do{
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        while(next_permutation(a,a+n));
            */


        /*-----------------------------------------------------------------*/


        /* COUNTING SAME NO.
            cout<<count(a,a+n,2);
        */


        /*-----------------------------------------------------------------*/




    }
}
