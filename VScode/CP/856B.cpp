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
        vector<int>a;
        for(int i = 0; i < n; i++)
        {
            int temp;   
            cin>>temp;
            if(temp<=1){temp=2;}
            a.push_back(temp);
        }       
    
    for(int i = 0; i < n-1; i++)
    {
        while((a[n-i-1])%(a[n-i-2])==0)
        {
            a[n-i-2]+=1;
        }  
    }

    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";   
    }
    cout<<endl;
   
    }
    return 0;
}