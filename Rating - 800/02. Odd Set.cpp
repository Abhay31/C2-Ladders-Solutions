#include<bits/stdc++.h>
using namespace std;
int odd_p(int n, int ans[])
{
    int c1 = 0, c2 = 0;
    for(int i = 0;i<n;i++)
    {
        if(ans[i]%2 == 0)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    if(c1 == c2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans[2*n];
        for(int i = 0;i<2*n;i++)
        {
            cin>>ans[i];
        }
        odd_p(2*n,ans);
    }
}
