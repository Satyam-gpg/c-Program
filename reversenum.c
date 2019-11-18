#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
     int n, d; 
     clrscr(); 
     printf("Enter Number:"); 
     scanf("%d",&n); 
     while(n>0) 
     { 
          d=n%10; 
          printf("%d",d); 
          n=n/10; 
     } 
     getch(); 
} 
