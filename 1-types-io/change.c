//
// Created by 14806 on 2023/9/23.
//
#include<stdio.h>
int main(void)
{
    int money;
    scanf("%d",&money);
    int the_num_50,the_num_20,the_num_10,the_num_5,the_num_1;
    int a,b,c,d,e;
    the_num_50=money/50;
    a=money%50;
    the_num_20=a/20;
    b=a%20;
    the_num_10=b/10;
    c=b%10;
    the_num_5=c/5;
    d=c%5;
    the_num_1=d;
    printf("%d\n%d\n%d\n%d\n%d\n",the_num_50,the_num_20,the_num_10,the_num_5,the_num_1);
    return 0;
}
