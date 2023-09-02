#include<bits/stdc++.h>
using namespace std;
using lli = long long int;

int main()
{
    string s;
    cin>>s;
    string garland2;
    cin>>garland2;
    map<char,int>m;

    for(int i = 0; i < s.size(); i++)
    {
        m[s[i]-'a']++;
    }
    map<char,int>m2;
    for(int i = 0; i < garland2.size(); i++)
    {
        m2[garland2[i]-'a']++;
    }
    int flag=0;
    int counter=0;
    string garland;
    garland+=garland2[0];
    for(int i = 0; i < garland2.size(); i++)
    {
        if(find(garland.begin(),garland.end(),garland2[i])==garland.end())
        {
            garland+=garland2[i];
        };
        
    }
    for(int i = 0; i < garland.size(); i++)
    {
        if(m[garland[i]-'a']==0)
        {
            flag=1;
        }else if(m[garland[i]-'a']<=m2[garland[i]-'a'])
        {
            counter+=m[garland[i]-'a'];
        }else if(m[garland[i]-'a']>m2[garland[i]-'a'])
        {
            counter+=m2[garland[i]-'a'];
        }
    }

    if(flag==1)
    {
        cout<<-1<<endl;
    }else
    {
        cout<<counter<<endl;
    }
    return 0;
}