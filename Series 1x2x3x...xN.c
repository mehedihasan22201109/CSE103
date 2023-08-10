#include<stdio.h>
int main ()
{

    int i,s,t,N;
    s=1;
    printf("Enter The Number: ");
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        t=i;
        s=s*t;

    }
    printf(" SUM = %d ",s);

}

