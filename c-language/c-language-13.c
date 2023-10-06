//
// Created by 14806 on 2023/9/26.
//
#include<stdio.h>
int main(void)
{
    int a,b,c;
    double sum=0;
    int i;
    scanf("%d%d%d",&a,&b,&c);
    sum+=a*(a+1)/2;
    for(i=1;i<=b;i++)
        sum+=i*i;
    for(i=1;i<=c;i++)
        sum+=1.0/i;
    printf("%.2lf\n",sum);
    return 0;
}