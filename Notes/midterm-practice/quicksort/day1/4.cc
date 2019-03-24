quicksort(int[] array) {
    quicksort(array, 0, array.length - 1);
}

quicksortCompute(int[] array, int left, int right) {
    if (left >= right){
        return;
    }
    int pivot =  array[(left + right) /2];
    int index = partition(array, left, right, pivot);
    quicksortCompute(array, left, index - 1);
    quicksortCompute(array, index, right);
}

int partition(int[] array, int left, int right, int pivot) {
    while(left <= right) {
        while(array[left] < pivot) {
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
    return left;
}