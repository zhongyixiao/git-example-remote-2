//
// Created by 14806 on 2023/9/28.
//
#include<stdio.h>
int main(void)
{
    int decimal;
    scanf("%d",&decimal);
    int arr[32]={0};
    int sz=sizeof(arr);
    int i=31,m;
    while(decimal!=0)
    {
        m=0;
        m=decimal%2;
        arr[i]=m;
        decimal/=2;
        i--;
    }
    int j;
    for(j=0;j<32;j++)
        printf("%d",arr[j]);
    return 0;
}