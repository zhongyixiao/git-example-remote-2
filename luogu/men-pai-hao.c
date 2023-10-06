//
// Created by 14806 on 2023/10/4.
//
#include<stdio.h>
int main()
{
    int i,j;
    int n,m=1,sum1=0,sum2=0,sum3=0;
    scanf("%d",&n);
    while(1)
    {
        sum1=0;
        for(i=1;i<=m;i++)
            sum1+=i;
        for(j=1;j<=m;j++)
        {
            sum2=sum1-j*3;
            if(sum2==n)
            {
                printf("%d %d",j,m);
                return 0;
            }
        }
        m++;
    }
}