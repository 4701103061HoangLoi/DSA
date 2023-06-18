#include <iostream>

void quicksort(int* arr, int begin, int end) {
	if (begin < end)
	{
		int pivot = arr[(begin + end)/2];
        int i = begin - 1;
        int j = end + 1;
        do {
            while (arr[++i] < pivot);
            while (arr[--j] > pivot);
            if (i < j) std::swap(arr[i], arr[j]);
        }
        while (i < j);
		quicksort(arr, begin, j);
		quicksort(arr, j + 1, end);
	}
}

int main()
{
    const int elements = 13;
    int arr[elements] = {5, 9, 1, 3, 2, 8, 4, 20, 6, 10, 12, -3, -8};
    for (int i = 0; i < elements; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    quicksort(arr, 0, elements - 1);
    for (int i = 0; i < elements; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}
