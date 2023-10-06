//
// Created by 14806 on 2023/9/28.
//
#include<stdio.h>
#include <string.h>

int main()
{
    char arr[200];
    scanf("%[^\n]",arr);
    int i,m;
    int sz=strlen(arr);
    for(i=0;i<sz;i++)
    {
        m=arr[i];
        if(m>=97 && m<=122)
        {
            char n=arr[i]-32;
            printf("%c",n);
        }
        else
            printf("%c",arr[i]);
    }
    return 0;
}