#include <stdio.h>
#include <string.h>

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};

    void *ptr = numbers;

    printf("Before memset: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    memset(ptr, 0, sizeof(numbers));

    printf("After memset: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}
