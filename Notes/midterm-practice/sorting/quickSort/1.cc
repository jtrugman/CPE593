quickSort(int [] array) {
    quickSortCompute(array, 0, array.length -1);
}
quickSortCompute(int [] array, int left, int right){
    int pivot = array[(left + right) / 2];
    int index = partition(array, left, right, pivot);
    quickSortCompute(array, left, index - 1);
    quickSortCompute(array, index, right);
}

int partition(int [] array, int left, right, pivot) {
    while (left <= right) {
        while (array[left] < pivot) {
            left++;
        }
        while(array[right] > pivot) {
            right--;
        }
        if (left <= right) {
            swap(array, left, right);
            left++;
            right--;
        }
    }
}