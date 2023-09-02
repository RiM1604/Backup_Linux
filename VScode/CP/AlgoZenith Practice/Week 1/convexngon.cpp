#include<bits/stdc++.h>
using namespace std;
using lli= long long int;
int binary_exponentiation(lli a, lli b, int mod)
{
    lli ans=1;
    while(b)
    {
        if(b==1)
        {
            ans= (a*ans)%mod;
        }
        a=a*a;
        b/=2;
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {   
        int a,b;
        cin>>a>>b;
        vector<lli>fact;
        fact.push_back(1);
        int temp=1;
        for(int i=1;i<=a+b;i++)
        {
            temp*=i;
            fact.push_back(temp);
        }
        int noofways= fact[a+b]/(fact[a]*fact[b]);
        cout<<noofways;
    }
    return 0;
}