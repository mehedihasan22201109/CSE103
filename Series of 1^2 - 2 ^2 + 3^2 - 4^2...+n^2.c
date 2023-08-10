#include<stdio.h>
int main ()
{

    int i,s,t,N;
    s=0;
    printf("Enter The Number: ");
    scanf("%d",&N);
    for(i=0; i<=N; i++)
    {
        if (i%2== 0)
        {
            t=-i*i;

        }
        else
        {
            t=i*i;
        }
        s=s+t;

    }
    printf(" SUM = %d ",s);

}


