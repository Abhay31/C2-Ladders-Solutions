#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c1 = 0, c2 = 0;
        int n;
        cin>>n;
        if(n%3 == 1)
        {
            c1 = n/3;
            c2 = n/3;
            c1++;
        }
        else if(n%3 == 2)
        {
            c1 = n/3;
            c2 = n/3;
            c2++;
        }
        else
        {
            c1 = n/3;
            c2 = n/3;
        }
        cout<<c1<<" "<<c2<<endl;
    }
}
