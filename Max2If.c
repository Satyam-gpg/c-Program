#include <stdio.h> 
#include <conio.h> 
void main () 
{ 
    int a,b;
    clrscr();
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    if (a > b)
    printf("%d is maximum",a);
    else
    printf("%d is maximum",b);
    getch ();
}
