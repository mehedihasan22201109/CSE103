#include<stdio.h>
int Max(int a,int b)
{
    int m;
    if(a>b)
        m=a;
    else
        m=b;
    return m;
}
main()
{
    int p;
    p=Max(20,50);
    printf("Maximum is %d",p);

}
