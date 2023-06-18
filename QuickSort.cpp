void quicksort(int* arr, int begin, int end) {
	if (begin < end)
	{
		int pivot = arr[(high + low)/2];
        	int i = low - 1;
        	int j = high + 1;
        	do {
            		while (arr[++i] < pivot);
            		while (arr[--j] > pivot);
            		if (i < j) std::swap(arr[i], arr[j]);
        	} while (i < j);
		quicksort(arr, begin, j);
		quicksort(arr, j + 1, end);
	}
}
