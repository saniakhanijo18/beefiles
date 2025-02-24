#include <stdio.h> 
void swapByReference(int *a, int *b) { 
int temp = *a; 
*a = *b; 
*b = temp; 
} 
int main() { 
int x, y; 
printf("Enter the value of x: "); 
scanf("%d", &x); 
printf("Enter the value of y: "); 
scanf("%d", &y); 
printf("Before swapping: x = %d, y = %d\n", x, y); 
swapByReference(&x, &y); 
printf("After swapping (Call by Reference): x = %d, y = %d\n", x, y); 
return 0; 
} 
