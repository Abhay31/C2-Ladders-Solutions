#include <iostream>
using namespace std;

void solve(int n,int sum)
{
    if(sum==n)
    {
        cout<<0<<endl;
        return;
    }
    if(sum>n)
    {
        cout<<sum-n<<endl;
    }
    else
    {
        cout<<1<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>ans[i];
            sum+=ans[i];
        }
        solve(n,sum);
    }
    return 0;
}
