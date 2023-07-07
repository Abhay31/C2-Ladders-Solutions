#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int d = 0;
        for(int i = 0;i<n;i++)
        {
            int c = 0;
            for(int j = i+1;j<n;j++)
            {
                if(s[i] == s[j])
                {
                   if(c > 0)
                   {
                       d++;
                       break;
                   }
                }
                else
                {
                    c++;
                }
            }
        }
        if(d == 0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
