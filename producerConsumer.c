#include <stdio.h>
#include <stdlib.h>

int mutex = 1;
int full = 0;
int empty = 10, x = 0;

void producer()
{
    --mutex;
    ++full;
    --empty;
    ++x;
    printf("Producer produces item %d", x);
    ++mutex;
}

void consumer()
{
    --mutex;
    --full;
    ++empty;
    printf("Consumer consumes item %d", x);
    --x;
    ++mutex;
}

int main()
{
    int choice;
    printf("\n1. Press 1 for Producer\n2. Press 2 for Consumer");

#pragma omp critical

    while (1)
    {
        printf("\n\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if ((mutex == 1) && (empty != 0))
            {
                producer();
            }
            else
            {
                printf("Buffer is full!");
            }
            break;
        case 2:
            if ((mutex == 1) && (full != 0))
            {
                consumer();
            }
            else
            {
                printf("Buffer is empty!");
            }
            break;
        default:
            exit(0);
        }
    }

    return 0;
}
