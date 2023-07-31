#include<stdio.h>
main (){
int x,n,a,b,c,d;
scanf("%d",&x);
d=x%10;
x=x/10;
c=x%10;
x=x/10;
b=x%10;
x=x/10;
a=x%10;
n= (d*1000)+(c*100)+(b*10)+(a*1);
printf("%d",n);

}
