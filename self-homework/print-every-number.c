//
// Created by 14806 on 2023/10/1.
//
#include<stdio.h>
int print(int n)
{
    if(n>9)
        print(n/10);
    printf("%d ",n%10);
}
int main(void)
{
    int num;
    scanf("%d",&num);
    print(num);
    return 0;
}
//要想打印每一个数字，如1234
//首先，打印4很简单，只要1234%10
//那运用递归思想，要将大工程转换为重复的小工程
//所以print（123） 4
//print（12）3 4
//print(1) 2 3 4