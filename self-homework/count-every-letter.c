//
// Created by 14806 on 2023/10/3.
//
#include<stdio.h>
int str_len(char* str)//str为arr字符串的下标
{
    int count=0;
    while(*str!='\0')//'\0'代表空格，为什么要用空格来判断字符串的长度呢？因为arr中除了储存了字符串外还在最后储存了一个空格
    {
        count++;
        str++;
    }
    return count;
}
//若用递归的思想解决：
// str_len(bit)
//=1+sre_len(it)
//=1+1+str_len(t)
//=1+1+1+str_len(\0)
//=1+1+1+0
int str_len_2(char* str)
{
    if(*str!='\0')
        return 1+str_len_2(str+1);
    else
        return 0;
}
int main(void)
{
    char arr[]="bit";
    scanf("%s",arr);
    printf("%d",str_len_2(arr));
    return 0;
}