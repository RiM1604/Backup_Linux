#include<bits/stdc++.h>
using namespace std;
//#define long long ll;

int main()
{
    int n,last=0;
    cin>>n;
    vector<int>first,second;
    while(n--)
    {
        int temp;
        cin>>temp;
        if(temp>0)
        {
            first.push_back(temp);
        }else
        {
            second.push_back(-1*temp);
        }
        if(n==0)
        {
            last=temp;
        }
    }
    
    long long  int score1=0,score2=0;
    for(auto &x: first)
    {
        score1+=x;
    }
    for(auto &x: second)
    {
        score2+=x;
    }

    if(score1>score2)
    {
        cout<<"first"<<endl;
    }else if(score1<score2)
    {
        cout<<"second"<<endl;
    }else 
    {
        int i=0;
        while((first[i]==second[i])&&(i<min(first.size(),second.size())))
        {
            i++;
        }

        if(i<min(first.size(),second.size()))
        {
            if(first[i]>second[i])
            {
                cout<<"first"<<endl;
            }else if(first[i]<second[i])
            {
                cout<<"second"<<endl;
            }
        }else
        {
            if(last<0)
            {
                cout<<"second"<<endl;
            }else
            {
                cout<<"first"<<endl;
            }
        }

    }
    return 0;


}
