#include<bits/stdc++.h>
using namespace std;
using lli = long long int;

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,q;
        cin>>n>>q;
        vector<lli>a;
        vector<lli>l;
        vector<lli>r;
        vector<lli>k;
        for(lli i = 0; i < n; i++)
        {
           lli temp;
           cin>>temp;
           a.push_back(temp); 
        }
        for(lli i = 0; i < q; i++)
        {
            lli templ,tempr,tempk;
            cin>>templ>>tempr>>tempk;
            l.push_back(templ);
            r.push_back(tempr);
            k.push_back(tempk);
        }
        lli outsum=0;
        for(lli i = 0; i < a.size(); i++)
        {
            outsum+=a[i];
        }
        vector<lli>prefixsum(a.size()+1);
        prefixsum[0]=a[0];
        for(lli i = 1; i <a.size(); i++)
        {
            prefixsum[i]=prefixsum[i-1]+a[i];
        }
        for(lli i = 0; i < q; i++)
        {
            lli extrasum=0;
            lli lval=l[i]-1;
            lli kval=k[i];
            lli rval=r[i]-1;


            lli sum=0;
            sum=outsum;
            if(lval!=0)
            {
                extrasum= prefixsum[rval]-prefixsum[lval-1];
            }else
            {
                extrasum= prefixsum[rval];
            }
            sum+=kval*(lval-rval+1);
            sum=sum-extrasum;
            if(sum%2==0)
            {
                cout<<"NO"<<endl;
            }else
            {
                cout<<"YES"<<endl;
            }
        }


    }   
    return 0;
}