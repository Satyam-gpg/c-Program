#include stdio.h 
#include conio.h 
void main() 
{ 
     int i,n; 
     long int fact=1; 
     clrscr(); 
     printf("Enter Value of n:"); 
     scanf("%d",&n); 
     for(i=1;i<=n;i++) 
     { 
           fact=fact*i; 
     } 
     printf("Factorial of %d is %ld",n,fact); 
     getch(); 
} 
