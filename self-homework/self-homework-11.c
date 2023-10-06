//
// Created by 14806 on 2023/9/28.
//
#include<stdio.h>
#include <string.h>
int main(void)
{
    char arr[200];
    scanf("%[^\n]",arr);
    int i;
    int sz=strlen(arr);
    for(i=0;i<sz;i++)
    {
        int m=arr[i];
        if(m!=32)
            printf("%c",arr[i]);
    }
    return 0;
}