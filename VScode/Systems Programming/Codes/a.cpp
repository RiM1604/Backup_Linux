#include<bits/stdc++.h>
using namespace std;
class a{
    int x=0,y=0;
    public:
    void print(){
        cout<<1;
    }
};
class b:public a{
    using a::x;
    int y=1;
    public:
    void print(){
        cout<<2;
    }
};
int main(){
    b r;
    r.a::print(1);
    return 0;
}