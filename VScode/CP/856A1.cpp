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
       vector<string> input;
       for(int i = 0; i < 2*n-2; i++)
       {
           string temp;
           cin>>temp;
           input.push_back(temp);
       }
        for(int i = 0; i < 2*n-2; i++)
       {
           cout<<input[i];
       }
        vector<string>oneval,nval;
    for(int i = 0; i < 2*n-2; i++)
    {
        if(input[i].size()==1)
        {
            oneval.push_back(input[i]);
        }
        if(input[i].size()==3)
        {
            nval.push_back(input[i]);
        }
    }

    for(auto it = oneval.begin(); it!=oneval.end(); it++)
    {       
        
          cout<<*it<<" ";
    }

    vector<string>val;

    for(auto it= oneval.begin();it!=oneval.end();it++)
    {
        for(auto it1=nval.begin();it1!=nval.end();it1++)
        {
            string temp= *it+*it1;
            string temp2=*it1+*it;
            val.push_back(temp);
            val.push_back(temp2);
        }
    }

    for(auto it=val.begin();it!=val.end();it++)
    {
        for(auto it1=val.begin();it!=val.end();it++)
        {
            if(*it==*it1)
            {
                cout<<" "<<"finalanswre";
                cout<<*it<<" ";
            }
        }
    }


    }
    
    return 0;
}