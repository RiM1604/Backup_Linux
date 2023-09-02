#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0,num=0;
        int max=0;
        vector<int>a;
        for(int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            if(max<temp)
            {
                max=temp;
            }
            a.push_back(temp);
        }
        int k=0;
        while(max/int(pow(2,k))!=0)
        {
            k++;
        }

        if(n%2==0)
        {
            int j=1,counter=0;
            while(j!=k)
            {
                for(int i = 0; i < n; i++)
                {
                    if(a[i]%int(pow(2,j))==1)
                    {
                        counter+=1;
                    }
                }
                if(counter%2==1)
                {
                    flag=1;
                }
                j++;

            }
            if(flag==1)
            {
                cout<<-1<<endl;
            }else
            {
                cout<<a[n-1]<<endl;
            }
        }
        else if(n%2==1)
        {
            int j=1,counter=0;
            while(j!=k)
            {
                for(int i = 0; i < n; i++)
                {
                    if(a[i]%int(pow(2,j))==1)
                    {
                        counter+=1;
                    }
                }
                if(counter%2==1)
                {
                    num+=pow(2,j-1);
                }
                j++;

            }
            cout<<num<<endl;
        }

       

    }
    return 0;
}