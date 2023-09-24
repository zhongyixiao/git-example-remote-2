//
// Created by 14806 on 2023/9/19.
//
//对于求两个数的最大公约数，用辗转相除法
#include<stdio.h>
int main(void)
{
    int m,n,r;
    scanf("%d%d",&m,&n);
    while(r=m%n)//此处这样写可以提高效率，一步既把m%n的值赋给了r，又默认判断了r不为零
    {
        m=n;
        n=r;
    }
    printf("%d",n);
    return 0;
}
