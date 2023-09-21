//
// Created by 14806 on 2023/9/20.
//
#include<stdio.h>
int main()
{
    double i,j,sum1=0,sum2=0,sum=0;
    for(i=1;i<=100;i+=2)
        sum1+=1.0f/i;
    for(j=2;j<=100;j+=2)
        sum2+=1.0f/j;
    sum=sum1-sum2;
    printf("%1f",sum);
    return 0;
}