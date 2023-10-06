//
// Created by 14806 on 2023/10/4.
//
//辗转相除的递归写法
#include<stdio.h>
int rep(int a,int b)
{
    int r=a%b;
    if(r==0)
    return b;
    else
        return rep(b,r);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",rep(a,b));
    return 0;
}