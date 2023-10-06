//
// Created by 14806 on 2023/9/25.
//
#include<stdio.h>
int main(void)
{
    int n;
    unsigned long long sum=0,sum1=1;
    int i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum1*=j;
        }
        sum+=sum1;
        sum1=1;
    }
    printf("%llu",sum);
    return 0;
}