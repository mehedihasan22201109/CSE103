#include<stdio.h>
int main ()
{
    int A,B,Max;
    printf("Enter two integers:");
    scanf("%d%d",&A,&B);
    switch (A>B)
    {
    case 1:
        Max=A;
        break;
    case 0:
        Max=B;
        break;

    }
    printf("%d",Max);

}

