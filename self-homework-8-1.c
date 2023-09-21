//
// Created by 14806 on 2023/9/20.
//
//打印1/1-1/2+1/3-。。。。。。+1/n的值
//要注意此时为浮点型
#include<stdio.h>
int main()
{
    double i,sum=0;
    int t=1;
    for(i=1;i<=100;i++)
    {
        sum+=t*1.0f/i;
        t=-t;
    }
    printf("%1f",sum);
    return 0;
}