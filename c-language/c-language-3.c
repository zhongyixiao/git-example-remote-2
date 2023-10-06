//
// Created by 14806 on 2023/9/24.
//
#include<stdio.h>
int main(void)
{
    char first;
    char second;
    char third;
    char fourth;
    char fifth;
    scanf("%c%c%c%c%c",&first,&second,&third,&fourth,&fifth);
    char first2 = first + 4;
    char second2 = second + 4;
    char third2 = third + 4;
    char fourth2 = fourth + 4;
    char fifth2 = fifth + 4;
    printf("%c%c%c%c%c",first2,second2,third2,fourth2,fifth2);
    return 0;
}
