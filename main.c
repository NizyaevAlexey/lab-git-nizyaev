#include <stdio.h>
int main() {
    char name[50];
   printf("Please, enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!", name);
    return 0;
}