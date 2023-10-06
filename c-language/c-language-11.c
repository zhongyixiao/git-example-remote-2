//
// Created by 14806 on 2023/9/25.
//
#include<stdio.h>
#include <math.h>
int main(void)
{
    int n,sum=0,sum1=0;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    {
        int j;
        for(j=0;j<i;j++)
        {
            sum1+=2*pow(10,j);
        }
        sum+=sum1;
        sum1=0;
    }
    printf("%d",sum);
    return 0;
}