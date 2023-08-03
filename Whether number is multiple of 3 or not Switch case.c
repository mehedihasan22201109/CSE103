#include<stdio.h>
int main ()
{
    int n;
    printf("Enter any number to check : ");
    scanf("%d", &n);
    switch (n%3)
    {
    case 0:
        printf("Multiple of 3");
        break;
      //You can use dault instead of case 1 and case 2. You can try from below
     // After case o ended  you can also use default: printf("NO its not"); break;} retun 0;
    case 1:
        printf("No Its Not");
        break;
    case 2:
        printf("No Its Not");
        break;


    }
}
