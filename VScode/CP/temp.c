#include<stdio.h>

int divide(int a,int b)
{
    int c= b/a;
    if(a==0)return 0;
    else return c;
}

int main()
{
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",a);
    printf("%d",a+b);
    printf("%d", divide(a,b));

    return 0;
}