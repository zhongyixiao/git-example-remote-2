//
// Created by 14806 on 2023/9/23.
//
#include<stdio.h>
int main(void)
{
    int a,b;
    double c;
    scanf("%d%d",&a,&b);
    c=a*1.0/b;
    printf("%f",c);
    return 0;
}

/*#include<stdio.h>
#include <math.h>
int main()
{
    double pi1,pi2;
    pi1=log(pow(640320,3)+744)/sqrt(163);
    pi2=4.0*(4*atan(1.0/5)-atan(1.0/239));
    printf("%.15f\n%.15f\n",pi1,pi2);
    return 0;
}*/
/*#include<stdio.h>
#include <math.h>
int main()
{
    double pi1,pi2;
    pi1=log(pow(640320,3)+744)/sqrt(163);
    pi2=4.0*(4*atan(1.0f/5.0f)-atan(1.0f/239.0f));
    printf("%.15f\n%.15f\n",pi1,pi2);
    return 0;
}*/
/*
#include<stdio.h>
#include<math.h>
int main(void)
{
    double pi=0;
    pi=log(pow(640320,3)+744)/sqrt(163);
    double pi2=4*atan(1.0/5)-atan(1.0/239);
    printf("%.15f\n",pi);
    printf("%.15f",pi2*4.0);
    return 0;
}
*/
