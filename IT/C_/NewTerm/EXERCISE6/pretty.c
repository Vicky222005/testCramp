#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

struct data
{
    char value[10];
    int num;
    struct data *next;
};
struct data *head;

int main()
{
    int size = 10;
    struct data **nodearr = (struct data **)malloc(size * sizeof(struct data *));
    struct data *newdata = (struct data *)malloc(sizeof(struct data));
    int i = 0;
    while (scanf("%s %d", newdata->value, &(newdata->num)) != EOF)
    {
        if (i == size - 1)
        {
            size += 10;
            nodearr = (struct data **)realloc(nodearr, size * sizeof(struct data *));
        }
        nodearr[i] = newdata;
        newdata = (struct data *)malloc(sizeof(struct data));
        i++;
    }
    printf("===============\n");
    for (int j = 0; j < i; j++)
    {
        char numarr[4];
        int n = 0;
        for (n; nodearr[j]->value[n] != '\0'; n++)
        {
            printf("%c", nodearr[j]->value[n]);
        }
        sprintf(numarr, "%d", nodearr[j]->num);
        int n2 = 0;
        while (numarr[n2] != '\0')
        {
            n2++;
        }
        for (int n1 = 0; n1 < (12 - n); n1++)
        {
            printf(" ");
        }
        for (int j1 = 0; j1 < (3 - n2); j1++)
        {
            printf("0");
        }
        printf("%d\n", nodearr[j]->num);
    }
    printf("===============\n");

    return 0;
}
