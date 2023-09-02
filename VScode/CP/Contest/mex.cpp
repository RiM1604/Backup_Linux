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
        int flag=0;
        for(int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        int zerocount=0,firstcount=0,totalcount=0;
        for(int i = 0; i < n; i++)
        {
         if(a[i]==0)
         {
            zerocount+=1;
         }else if(a[i]==1)
         {
            firstcount+=1;
         }
         if(a[i]!=0)
         {
            totalcount+=1;
         }   
        }

        if(firstcount==0)
        {
            if(totalcount==0)
            {
                cout<<1<<endl;
            }else if(zerocount-totalcount<=1)
            {
                cout<<0<<endl;
            }else
            {
                cout<<1<<endl;
            }
        }else
        {
        if(zerocount-firstcount>1)
        {
                if(totalcount-firstcount==0)
                {
                    cout<<2<<endl;
                }else if(totalcount-firstcount!=0)
                {
                    if(zerocount-totalcount<=1)
                    {
                        cout<<0<<endl;
                    }else if(zerocount-totalcount>1)
                    {
                        if(totalcount-firstcount>=1)
                        {
                            cout<<1<<endl;
                        }else
                        {
                            cout<<2<<endl;
                        }
                    }
                }
            
        }else if(zerocount-firstcount<=1)
        {
            cout<<0<<endl;
        }        
        }
    }
    
    return 0;
}
