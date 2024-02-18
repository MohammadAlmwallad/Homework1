#include <stdio.h>

int main() {
    char name[100];
    int age;
    char address[200];
    
    printf("Enter your full name: ");
    scanf("%99s", name); 
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your address: ");
    scanf("%199s", address); 
    
    printf("Name: %s\nAge: %d\nAddress: %s\n", name, age, address);
    return 0;
}
