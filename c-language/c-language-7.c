//
// Created by 14806 on 2023/9/24.
//
#include<stdio.h>
#include <string.h>
int main()
{
    char arr[20];
    scanf("%s",arr);
    int sz=strlen(arr);
    printf("%d\n",sz);
    int j;
    for(j=0;j<=sz-1;j++)
    {
        printf("%d ",arr[j]-48);
    }
    printf("\n");
    int i;
    for(i=sz-1;i>=0;i--)
    {
        printf("%d",arr[i]-48);
    }
    return 0;
}
