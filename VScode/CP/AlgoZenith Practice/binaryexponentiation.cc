#include<bits/stdc++.h>
using namespace std;
using lli = long long int;

lli binaryexponentiation(lli a, lli b, int mod)
{
    int ans=1;
    while(b)
    {
        if(b%2==1)
        {
            ans = (a*ans)%mod;
        }
        a= a*a%mod;
        b/=2;
    }
    return ans;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<binaryexponentiation(a,b,1e9+7);
}
