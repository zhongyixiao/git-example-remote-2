//
// Created by 14806 on 2023/9/25.
//
#include<stdio.h>
#include <string.h>

int main(void)
{
    char arr[300];
    scanf("%[^\n]",arr);
    int sz=strlen(arr);
    int i;
    int number=0,letter=0,blank=0,other=0;
    for(i=0;i<sz;i++)
    {
        int m=arr[i];
        if((m>=65 && m<=90) || (m>=97 && m<=122))
            letter++;
        else if(m>=48 && m<=57)
            number++;
        else if(m==32)
            blank++;
        else
            other++;
    }
    printf("%d %d %d %d\n",letter,number,blank,other);
    return 0;
}