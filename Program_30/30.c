#include <stdio.h>
#include <stdlib.h>

int input();
void get_prices(int *prices, int items);
void sort_prices(int *prices, int *sorted_prices, int items);
void display(int *arr, int items);

int main()
{
    int items;
    items = input();
    int *prices = malloc(items * sizeof(int));
    int *sorted_prices = malloc(items * sizeof(int));

    get_prices(prices, items);
    sort_prices(prices, sorted_prices, items);
    display(sorted_prices, items);

    free(prices);
    free(sorted_prices);
    printf("Name: Megh Rana\nBranch: CE CSPIT\nStudent ID: 25CE099\n");
    return 0;
}

int input()
{
    int items;
    printf("Enter number of items: ");
    scanf("%d", &items);
    return items;
}

void get_prices(int *prices, int items)
{
    printf("Enter the prices of %d items:\n", items);
    for (int i = 0; i < items; i++)
    {
        printf("Item %d: ", i + 1);
        scanf("%d", &prices[i]);
    }
}

void sort_prices(int *prices, int *sorted_prices, int items)
{
    for (int i = 0; i < items; i++)
    {
        sorted_prices[i] = prices[i];
    }

    for (int i = 0; i < items - 1; i++)
    {
        for (int j = 0; j < items - i - 1; j++)
        {
            if (sorted_prices[j] > sorted_prices[j + 1])
            {
                int temp = sorted_prices[j];
                sorted_prices[j] = sorted_prices[j + 1];
                sorted_prices[j + 1] = temp;
            }
        }
    }
}

void display(int *arr, int items)
{
    printf("Sorted prices in ascending order:\n");
    for (int i = 0; i < items; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}