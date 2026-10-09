#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
void wert()
{
    // int n=5;
    // int a=1,b=1;
    // vector<int>ans;
    // vector<int>vis(N,0);
    // ans.push_back(1);
    // ans.push_back(1);
    // vis[1]=1;
    // for(int i=1;i<=20;i++)
    // {
    //     a=a+b;
    //     swap(a,b);
    //     ans.push_back(a);
    //     vis[a]=1;
    // }
    // for(int i=0;i<=15;i++)
    // {
    //     for(int j=i+1;j<=15;j++)
    //     {
    //         if(vis[ans[i]+ans[j]])
    //         {
    //             if(__gcd(ans[i],ans[j])==1)
    //             {
    //                 if((ans[i]+ans[j])%2==1)cout<<ans[i]<<" "<<ans[j]<<endl;
    //             }
    //         }
    //     }
    // }
    int n;
    cin>>n;
    if(n<=2)
    {
        cout<<0<<endl;
        return;
    }
    if(n==3)
    {
        cout<<2<<endl;
        return ;
    }
    if(n==4)
    {
        cout<<3<<endl;
        return ;
    }
    int num=n-4;
    if(num%3==2)
    {
    cout<<4+num/3*2<<endl;
    }
    else{
    cout<<3+num/3*2<<endl;
    }
 }   

signed main()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        wert();
    }
    return 0;
}
