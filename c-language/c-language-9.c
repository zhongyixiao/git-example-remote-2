//
// Created by 14806 on 2023/9/25.
//
#include<stdio.h>
int main(void)
{
    int a,b;
    scanf("%d%d",&a,&b);
    int a1,b1;
    a1=a;
    b1=b;
    int max,min;
    int i,j;
    while(a%b!=0)
    {
        max=a%b;
        a=b;
        b=max;
    }
    min=a1*b1/max;
    printf("%d %d",max,min);
    return 0;
}