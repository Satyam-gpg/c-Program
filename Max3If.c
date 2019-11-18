#include <stdio.h> 
#include <conio.h> 
void main () 
{ 
    int a,b,c;
    clrscr();
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Enter value of c:");
    scanf("%d",&c);
    if ((a > b) && (a>c))
    printf("%d is maximum",a);
    else if ((b>c) && (b>a))
    printf("%d is maximum",b);
    else
    printf("%d is maximum",c);
    getch ();
}
