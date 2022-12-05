#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a number:\n");
    scanf("%d %d", &a, &b);
    getchar();
    
    for (int i=0; i<b; i++) {
        printf("%d\n", a++);
    }
    
    return 0;
}