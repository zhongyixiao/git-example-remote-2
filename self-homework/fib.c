//
// Created by 14806 on 2023/10/3.
//
#include<stdio.h>
int fib(int m)
{
    int a=1;
    int b=1;
    int c=1;
    while(m>2)
    {
        c=a+b;
        a=b;
        b=c;
        m--;
    }
    return c;
}
int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;
}