#include<stdio.h>
int main ()
{

    int n,c;
    scanf("%d",&n);
    if(n%2==0)
        c=n-1;
    else
        c=1;



    while (c>=1)
    {

        printf(" %d ",c);
        c=c-2;
    }
}

