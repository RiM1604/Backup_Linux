#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>tasks;
    for(int i = 0; i < m; i++)
    {
        int temp;
        cin>>temp;
        tasks.push_back(temp);
    }
    int time=0,start=1;
    for(auto it=tasks.begin(); it!=tasks.end(); it++)
    {
        if(start<(*it))
        {
            time+=(*it)-start;
        }else if(start>(*it))
        {
            time+=4-start;
            time+=(*it);
        }else
        {
            time+=0;
        }
        start=(*it);
    }
    cout<<time<<endl;
    return 0;
}