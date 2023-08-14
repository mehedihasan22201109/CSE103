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
    int p,X,Y;
    scanf("%d%d",&X,&Y);
    p=Max(X,Y);
    printf("Maximum is %d.",p);

}
