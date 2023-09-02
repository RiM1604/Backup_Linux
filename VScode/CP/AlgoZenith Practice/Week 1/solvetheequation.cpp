#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num,denom;
        cin>>num>>denom;
        float ans;

        int remain= num%denom;
        int remain2= (remain*10)%denom;
        string answer;
        if(remain==remain2)
        {
            int integralpart= num/denom;
            ans =integralpart+(float(remain)/denom);
            answer= to_string(ans);
        }else
        {
            ans = num/float(denom);
            answer = to_string(ans);
        }

        cout<<answer;
    }
    return 0;
}