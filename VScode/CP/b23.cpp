#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,q,l,r;
    cin>>p>>q>>l>>r;
    vector<pair<int,int>>xt,yt,timeintervals;
    vector<int> time(1001);

    for(int i = 0; i < p; i++)
    {
        int l,r;
        cin>>l>>r;
        pair<int,int>temp = {l,r};
        xt.push_back(temp);
    }


    for(int i = 0; i < q; i++)
    {

        cin>>l>>r;
        pair<int,int>temp = {l,r};
        yt.push_back(temp);
    }

    for(int i = 0; i < yt.size(); i++)
    {
        int interval=xt[i].second-xt[i].first;
        pair<int,int>ladded;
        if(yt[i].first-interval+1<0)
        {
            if(yt[i].second+interval>1000)
            {
                ladded= {0,1000};
            }else
            {
                ladded={0,yt[i].second+interval};
            }
        }else
        {
            if(yt[i].second+interval>1000)
            {
                ladded= {yt[i].first-interval+1,1000};
            }else
            {
                ladded={yt[i].first-interval+1,yt[i].second+interval};
            }
        }

        timeintervals.push_back(ladded);
    }

    for(int i = 0; i < timeintervals.size(); i++)
    {
        int l=timeintervals[i].first;
        int r=timeintervals[i].second;
        for(int i=l; i<r; i++)
        {
            time[i]=1;
        }
    }

    for(int i = 0; i < time.size(); i++)
    {
        cout<<time[i];
    }

    return 0;
}