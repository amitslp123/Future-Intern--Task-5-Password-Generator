#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Pass(int n) {
    char Str[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*()";
    int size = sizeof(Str) - 1;

    printf("Generated Password: ");
    for (int i = 0; i < n; i++) {
        printf("%c", Str[rand() % size]);
    }
    printf("\n");
}

int main() {
    system("cls");
    int n;
    srand(time(NULL)); 

    printf("Enter Size of Password: ");
    scanf("%d", &n);

    Pass(n);
    return 0;
}
