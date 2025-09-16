#include <stdio.h>
void swap(int a, int b) {
    int temp;
    temp = a;   
    a = b;     
    b = temp;  
    printf("a = %d\n,b = %d\n", a,b);
    
}

int main() {
    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);
printf("before swapping:\n");
   printf("a = %d\n,b = %d\n", a,b);
    printf("After swapping:\n");
      
    swap(a, b);

    

    return 0;
}

