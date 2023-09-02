#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n;
    cin>>q;
    vector<int>values;
    vector<int>prefixsum;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        values.push_back(temp);   
    }
    int sum=0;
    for(int i = 0; i < n; i++)
    {
             sum+=values[i];
             prefixsum.push_back(sum);  
    }

    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<(prefixsum[r+1]-prefixsum[l-1])%1e9+7;
    }
    return 0;
}