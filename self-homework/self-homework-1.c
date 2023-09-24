//
// Created by 14806 on 2023/9/17.
//
#include<stdio.h>
int main(void)
{
    int n,i=1,sum=1;
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum*i;
        i++;
    }
    printf("%d",sum);
    return 0;
}
