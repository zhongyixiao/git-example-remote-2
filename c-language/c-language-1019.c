//
// Created by 14806 on 2023/10/3.
//
#include<stdio.h>
#include <math.h>
int main(void)
{
    int m,n;
    scanf("%d%d",&m,&n);
    int i;
    double M;
    double sum=0;
    M=m*pow(1.0/2.0,n);
    printf("%.2lf ",M);
    for(i=2;i<=n;i++)
        sum+=m*pow(1.0/2.0,i-1);
    sum=sum*2+m;
    printf("%.2lf",sum);
    return 0;
}