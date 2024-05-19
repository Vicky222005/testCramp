#include <stdio.h>


int main()
{
    int lower, upper;
    printf("Enter Lower Limit: ");
    scanf("%d", &lower);
    printf("Enter Upper Limit: ");
    scanf("%d", &upper);
    printf("\n");
    printf("======================\n");
    printf("%7s %19s\n", "Celcius", "Fehrenheit\n");
    for (lower; lower <= upper; lower += 5)
    {
        printf("%7d %18.1lf\n", lower, ((double)lower * 9 / 5) + 32);
    }
    printf("======================\n");
    return 0;
}