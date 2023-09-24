//
// Created by 14806 on 2023/9/22.
//
#include<stdio.h>
#include <math.h>
#include <ctype.h>
//%d int;%f double（printf) %lf double(scanf);%e %E double（科学计数法）;%s 字符串；%c 字符
//%s 在输入时不会识别空格，换行等空白符，会读取一段非空白字符，而%c不会忽略空白符
//输入时，%9f表示输入时只能读九个字符
//scanf中的空格会识别并消耗输入中的空格，换行符（所以输入时可以换行）等
int main(void)
{
    char first_name[]="dayou";//数组类型的变量本身就表示了地址，因而输入时不用在加&
    char last_name[]="luo";//集中不同字母对应的艾塞克码值，可以通过加减数字来实现字母甚至大小写的转换。如：m->M 则m-32或m-'a'+'A'
    char gender='m';//不是字符串用单引号
    int birth_year=1954;
    int birth_month=7;
    int birth_day=20;
    char weekday[]="Tuesday";
    int c_score=30;
    int music_score=100;
    int medicine_score=85;

    double mean=(c_score+medicine_score+medicine_score)/3.0;
    double sd=sqrt((pow(c_score-mean,2)+pow(medicine_score-mean,2)+pow(music_score-mean,2))/3.0);
    int rank=5;
    printf("%s \t %s \t %c \n"
           "%.2d-%d-%d \t %.3s.\n"//.3s表示允许输出的字符串的位数
           "%d \t %d \t %d\n"
           "%.1f \t %.2f %d%%\n",//%%输出百分号本身
           first_name,last_name,toupper(gender),
           birth_month,birth_day,birth_year,weekday,
           c_score,music_score,medicine_score,
           mean,sd,rank);//%.2d表示最小要输出的位数
    return 0;
}
