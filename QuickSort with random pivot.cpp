#include <cstdlib>
#include <ctime>
#include <iostream>


void quickSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int pivot = arr[low + std::rand() % (high - low + 1)];
        int i = low - 1;
        int j = high + 1;
        while (true)
        {
            while (arr[++i] < pivot);
            while (arr[--j] > pivot);
            if (i >= j) break;
            std::swap(arr[i], arr[j]);
        }
        quickSort(arr, low, j);
        quickSort(arr, j + 1, high);
    }
}

int main()
{
    std::srand(std::time(NULL));
    const int elements = 13;
    int arr[elements] = {5, 9, 1, 3, 2, 8, 4, 20, 6, 10, 12, -3, -8};

    quickSort(arr, 0, elements - 1);
    for (int i = 0; i < elements; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}
