#include <stdio.h>
void swap(int *a, int *b) {
    int temp;
    temp = *a;   
    *a = *b;     
    *b = temp;  
}

int main() {
    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

