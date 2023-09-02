#include <stdio.h>
#include "part1.h"
int add(int a, int b)
{
    int temp= a+b;
    return temp;
}

int divide(int a, int b)
{
    if(b==0)return 0;
    else
    {
        int temp= a/b;
        return temp;
    } 
}

