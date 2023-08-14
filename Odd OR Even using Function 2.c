#include<stdio.h>
OddOrEven(int x)
{
    if(x%2==0)
        printf("The number you entered is Even.");
    else
        printf("\nThe number you entered is Odd.");

}
main()
{
   int y;
   scanf("%d",&y);
   OddOrEven(y);
}


