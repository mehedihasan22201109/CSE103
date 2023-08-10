#include<stdio.h>
int main ()
{

    int i,t,x,N;
    double P=1;
    printf("Enter x & N Here:");
    scanf("%d%d",&x,&N);
    for(i=1; i<=N; i++)
    {
        t=x;
        P=P/t;

    }
    printf(" x to the power -N (x^-N) = %lf ",P);

}

