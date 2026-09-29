#include <iostream>
#define SIZE 5

void bsort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int k = 0; k < n - 1 - i; k++)
            if (a[k] > a[k + 1])
            {
                int t = a[k];
                a[k] = a[k + 1];
                a[k + 1] = t;
            }
}
int main()
{
    int arr[SIZE] = {5, 2, 9, 1, 7};

    bsort(arr, SIZE);

    for (int i = 0; i < SIZE; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}