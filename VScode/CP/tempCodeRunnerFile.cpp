#include<bits/stdc++.h>
using namespace std;

int main()
{
    string bf;
    cin>>bf;
    string unary;
    for(int i = 0; i < bf.size(); i++)
    {
        char temp=bf[i];
        switch(temp)
        {
            case '>':
                unary+="1000";
                break;
            case '<':
                unary+="1001";
                break;
            case '+':
                unary+="1010";
                break;
            case '-':
                unary+="1011";
                break;
            case '.':
                unary+="1100";
                break;
            case ',':
                unary+="1101";
                break;
            case '[':
                unary+="1110";
                break;
            case ']':
                unary+="1111";
                break;
        }

    }
    long long int ans=0;

    vector<int>pow2(unary.size());
    long long int temp2=1;
    pow2[0]=1;
    for(int i = 1; i <= unary.size(); i++)
    {
        temp2=(temp2*2)%1000003;
        pow2[i]=temp2;

    }

    for(int i = 0; i < unary.size(); i++)
    {
        int temp= unary[unary.size()-i-1]-'0';
        if(temp==1)
        {
            ans=(ans+pow2[i])%1000003;            
        }
    }

    cout<<(ans%1000003)<<endl;

    return 0;
}