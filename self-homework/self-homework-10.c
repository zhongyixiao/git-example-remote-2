//
// Created by 14806 on 2023/9/20.
//
//打印99乘法口诀表
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d*%d=%-2d ",i,j,i*j);
        printf("\n");
    }
    return 0;
}
