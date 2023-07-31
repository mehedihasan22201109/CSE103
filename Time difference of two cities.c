#include<stdio.h>
main ()
{
    int h1,m1,h2,m2,h,m,d;
    h1=9;
    h2=9;
    m1=52;
    m2=22;
    printf("Enter the time of 1st city");
    scanf("%d %d",&h1,&m1);
    printf("Enter the timeof 2nd city");
    scanf("%d %d",&h2,&m2);
    d=(h1*60+m1)-(h2*60+m2);
    h=d/60;
    m=d%60;
    printf("Time difference is %d hours %d mintues",h,m);


}
