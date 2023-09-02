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
        vector<string>reversed;
        for(int i = 0; i <2* n-2; i++)
        {
            string temp;
            cin>>temp;
            reversed.push_back(temp);
        }       
        vector<string>straight;
        vector<int> firstval;
        vector<int> nval;
        int i=0;
        for(auto  it= reversed.begin(); it!=reversed.end(); it++)
        {
            reverse((*it).begin(),(*it).end());
        }
        for(int it = reversed.begin(); it!=reversed.end(); it++)
        {
            
        }
        for(auto  it = reversed.begin(); it!= reversed.end(); it++)
        {
            cout<<" "<<*it;
        }


    }
    return 0;
}