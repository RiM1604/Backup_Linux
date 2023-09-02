#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>per;
    for(int i = 0; i < n; i++)
    {
        per.push_back(i+1);
    }
    if((n==1)&&(k==1))
    {
        cout<<-1<<endl;
    }
    else if(n<=k)
    {
        cout<<-1<<endl;
    }else 
    {
        for(int i = 0; i < n-k-1; i++)
        {
            int temp=per[i+1];
            per[i]=temp;
        }  
        per[n-k-1]=1;

        for(int i = 0; i < n; i++)
        {
            cout<<per[i]<<endl;
        }
    }
    return 0;
}