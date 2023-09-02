#include<bits/stdc++.h>
using namespace std;
using lli = long long int;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v;
    for(int i = 0; i < m; i++)
    {
        vector<int>temp;
        int temp1,temp2,temp3;
        cin>>temp1>>temp2>>temp3;
        temp.push_back(temp1);
        temp.push_back(temp2);
        temp.push_back(temp3);
        v.push_back(temp);
    }
    map<int,int>m2;
    for(int i = 0; i < m; i++)
    {
        vector<int>temp;
        temp=v[i];
        for(int j = 0; j < 3; j++)
        {
            int temp2=temp[j];
            int pushed=1;
            int flag1=0,flag2=0,flag3=0;
            for(int k = 0; k < 3; k++)
            {
                if(m2[temp[k]]==1)
                {
                    flag1=1;
                }else if(m2[temp[k]]!=2)
                {
                    flag2=1;
                }else if(m2[temp[k]]!=3)
                {
                    flag3=1;
                }
            }
            if(flag1==1)
            {
              if(flag2==1)
              {
                if(flag3==1)
                {
                  pushed=0;
                }else
                {
                  pushed=3;
                }
                
              }else
              {
                pushed=2;
              }             
            }else
            {
              pushed=1;
            }
            
            if(m2[temp2]==0)
            {
                m2[temp2]=pushed;
            }
        }
        
    }
    for(int i = 0; i < n; i++)
    {
        if(i==n-1)
        {
            cout<<m2[i+1]<<endl;
        }else
        {
            cout<<m2[i+1]<<" ";
        }
    }

    return 0;
}