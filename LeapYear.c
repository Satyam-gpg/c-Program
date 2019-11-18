#include <stdio.h> 
#include <conio.h> 
#include <string.h> 
void main () 
{ 
    int year;
    clrscr ();
    printf("Enter year");
    scanf("%d",&year);
    if (year % 4 == 0)
    printf("%d is a leap year",year);
    else
    printf("%d is not a leap year,year");
    getch();
}
