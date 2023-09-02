#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    vector<int>l,r;
    vector<int>prefixsum(n+1);
    for(int i = 0; i < n; i++)
    {
        int temp,rtemp;
        cin>>temp>>rtemp;
        l.push_back(temp);
        r.push_back(rtemp);   
    }
    for(int i = 0; i < n; i++)
    {
        prefixsum[l[i]]+=1;
        prefixsum[r[i]+1]-=1;
    }
    for(int i = 1; i < n; i++)
    {
        prefixsum[i]+=prefixsum[i-1];
    }
    int i=0;
    while(i<q)
    {
    int ql,qr;
    cin>>ql>>qr;
    int goodnums=0;
    for(int i = ql; i <=qr; i++)
    {
      if(prefixsum[i]>=k)
      {
        goodnums+=1;
      }  
    }
        cout<<goodnums<<endl;
    
        i++;
    }

    
    return 0;
}