#include <stdio.h>

int main(void) {
    printf("How many motors are carrying the packages?\n");
    printf("Enter the amount: ");

    int motor = 0;

    scanf("%d", &motor);

    printf("How many kg of packages do we expect?\n");
    printf("Enter the weight in kg: ");

    float weight = 0;

    scanf("%f", &weight);

    float result = weight / motor;

    if (result <= 5.6) {
        printf("Yes! The conveyor belt can carry the packages.");
    } else {
        printf("No. The conveyor belt cannot carry the packages.");
    }
    
}