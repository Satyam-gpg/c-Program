#include<stdio.h>
#include<conio.h>
void main() 
{
    float f,c;
    clrscr();
    printf("Enter temperature in celcius:");
    scanf("%f",&c); 
    f=1.8*(c+32); 
    printf("Feranhit=%f",f); 
    getch(); 
} 
