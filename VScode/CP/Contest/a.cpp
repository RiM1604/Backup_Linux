#include<bits/stdc++.h>
using namespace std;

int mod(int a)
{
    if(a<0)return -1*a;
    else return a;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a<c)
        {
            if(b<d)
            {
                int h=d-b;
                int w=c-a;
                if(h==w)
                {
                    cout<<h<<endl;
                }else if(h<w)
                {
                    cout<<-1<<endl;
                }else if(h>w)
                {
                    int hex=mod(h-w);
                    cout<<mod(2*hex+mod(w))<<endl;
                }
            }else
            {
                cout<<-1<<endl;
            }
        }else if(a>c)
        {
            if(b<d)
            {
                int w=mod(c-a);
                int h=mod(d-b);
                if(h==0)
                {
                    cout<<mod(w)<<endl;
                }else
                {
                    int ans=w+h*2;
                    cout<<mod(ans)<<endl;                    
                }
            }else if(b==d)
            {
                int w=c-a;
                cout<<mod(w)<<endl;
            }else if(b>d)
            {
                cout<<-1<<endl;
            }
        }else if(a==c)
        {   
            if(b==d)
            {
                cout<<0<<endl;
            }else if(b>d)
            {
                cout<<-1<<endl;
            }else
            {
                int h=d-b;
                cout<<mod(2*h)<<endl;
            }
        }
       
    }
    return 0;
}