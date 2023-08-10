#include<stdio.h>
int main ()
{

    int i,N;
    printf("Enter The Number: ");
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        if(i%2==1)
            continue;
        printf(" %d ",i);
    }
}
