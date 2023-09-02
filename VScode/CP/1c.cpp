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
        string s;
        cin>>s;
        int flag=0;
        for(int i = 0; i < n; i++)
        {
            int odd=0,even=0;
            if(i%2==0)
            {
                even=1;
            }else
            {
                odd=1;
            }
            for(int j=0;j<n;j++)
            {
                if(s[i]==s[j])
                {
                    if(even==1)
                    {
                        if(j%2!=0)
                        {
                            flag=1;
                        }
                    }else if(odd==1)
                    {
                        if(j%2!=1)
                        {
                            flag=1; 
                        }
                    }
                }   

            }
        }

        if(flag==1)
        {
            cout<<"NO"<<endl;
        }else
        {
            cout<<"YES"<<endl;
        }

    }   
    return 0;
}