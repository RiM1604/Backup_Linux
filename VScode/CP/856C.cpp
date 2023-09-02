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
        vector<int>a,cost;
        for(int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            a.push_back(temp);   
        }       
        int flag=0;
        for(int i = 0; i < n; i++)
        {
         if(a[i]==a[i+1])
         {
            flag=1;
         }   
        }
        cost.push_back(1);

    }

    

    return 0;
}