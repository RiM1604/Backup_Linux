#include<bits/stdc++.h>
using namespace std;


int mod(int a)
{
    if(a<0){return -1*a;}
    else{ return a;}
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,d,w;
        cin>>n>>k>>d>>w;
        vector<int>t;
        for(int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            t.push_back(temp);    
        }

        vector<int>vaccinated;
        int packsneeded=0;
        for(int i = 0; i < n; i++)
        {
            if(t[i]==0)
            {
                continue;
            }
            int initialpack = t[i]+w;
            int packopen =k ;
            for(int j = 0; j < n; j++)
            {
                if(t[j]<=initialpack+d)
                {
                    if(packopen>0)
                    {
                        t[j]=0;
                    }else if(packopen==0)
                    {
                        packsneeded+=1;
                        break;
                    }
                    packopen--;
                }
            }
        }
        cout<<packsneeded<<endl;  
        
    }
    return 0;
}