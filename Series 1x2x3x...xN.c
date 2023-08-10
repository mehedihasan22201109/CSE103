#include<stdio.h>
int main ()
{

    int i,m,t,N;
    m=1;
    printf("Enter The Number: ");
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        t=i;
        m=m*t;

    }
    printf(" Multipication = %d ",m);

}

