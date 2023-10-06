//
// Created by 14806 on 2023/10/3.
//
#include<stdio.h>
int main(void)
{
    int n;
    int i;
    scanf("%d",&n);
    int sum=1;
    for(i=1;i<n;i++)
        sum=(sum+1)*2;
    printf("%d",sum);
    return 0;
}