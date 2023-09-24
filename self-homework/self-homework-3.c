//
// Created by 14806 on 2023/9/19.
//
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        int mid;
        mid=b;
        b=a;
        a=mid;
    }
    if(a<c)
    {
        int mid;
        mid=c;
        c=a;
        a=mid;
    }
    if(b<c)
    {
        int mid;
        mid=c;
        c=b;
        b=mid;
    }
    printf("%d %d %d",a,b,c);
    return 0;
}

