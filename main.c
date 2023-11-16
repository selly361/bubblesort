#include <stdio.h>


void bubblesort(int arr[10]);


int main(void)
{

    signed int arr[10] = {3, 10, 2, 1, 5, 100, -5, 20, 9, 900};
    bubblesort(arr);

    return 0;
}


void bubblesort(int arr[10])
{
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temporary = arr[j + 1];

                arr[j + 1] = arr[j];
                arr[j] = temporary;
            }
        }
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}
