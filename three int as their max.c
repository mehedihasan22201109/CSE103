#include<stdio.h>
main (){
int a,b,c,max;
scanf("%d\n%d\n%d",&a,&b,&c);
if (a>b && b>c)
    max=a;
    else if (b>a && b>c)
        max=b;
        else
            max=c;
    printf("Maximum is %d",max);

}
