#include<bits/stdc++.h>
using namespace std;
using lli = long long int;

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
          a.push_back(temp);  
        } 
        int miha=0,bian=0;
        for(int i = 0; i < n; i++)
        {
         if(a[i]%2==0)
         {
            miha+=a[i];
         }else
         {
            bian+=a[i];
         }
        }      
        if(miha<=bian)
        {
            cout<<"NO"<<endl;
        }else
        {
            cout<<"YES"<<endl;
        }
    }   
    return 0;
}