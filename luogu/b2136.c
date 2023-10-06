//
// Created by 14806 on 2023/10/5.
//
#include<stdio.h>
int b=0;
int rev(int a)
{
    if(a==0)
        return 1;
    else
    {
        b*=10;
        b+=a%10;
        rev(a/10);
    }
}
int main(void)
{
    int n;
    scanf("%d",&n);
    int i;
    int sum=0;
    for(i=11;i<=n;i++)
    {
        int j;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
        {
            rev(i);
            if(i==b)
                sum++;
            b=0;
        }
    }
    printf("%d",sum);
    return 0;
}