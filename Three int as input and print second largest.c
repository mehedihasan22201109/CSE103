#include<stdio.h>
main (){
int a,b,c,sm,max;
scanf("%d\n%d\n%d",&a,&b,&c);
if (a>b){
    max=a;
    sm=b;
}
else{
    max=b;
sm=a;
}

if (c>max)

{
    sm=max;
    max=c;
}
else if (c>sm && c<=max)
 sm=c;
printf("max %d second max %s",max,sm);
}
