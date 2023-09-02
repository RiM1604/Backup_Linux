#include<stdio.h>
#include "part1.h"
#include "part2.h"
int sub(int a, int b)
{
    return a-b;
}

int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int ans= sub(x,y);
    print(ans);
    printf("\n");
    ans= add(x,y);
    print(ans);
    printf("\n");
    ans = divide(x,y);
    print(ans);
    printf("\n");
}