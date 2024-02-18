#include <stdio.h>

int main() {
    int hours;
    printf("Enter number of hours: ");
    scanf("%d", &hours);
    printf("Total seconds: %d\n", hours * 3600); 
    return 0;
}
