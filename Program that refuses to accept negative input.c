#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    while (n<0)
    {

        printf("Please enter a postive number");
        scanf("%d",&n);
    }
}
