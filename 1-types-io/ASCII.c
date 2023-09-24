//
// Created by 14806 on 2023/9/23.
//
#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    char capitalization=(char)n;
    int m=n+32;
    char lowercase=(char)m;
    printf("%d %c\n",n,capitalization);
    printf("%d %c\n",m,lowercase);
    return 0;
}