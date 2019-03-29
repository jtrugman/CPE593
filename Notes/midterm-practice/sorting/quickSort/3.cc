quickSort(int [] array){
    quickSortCompute(array, 0, array.length -1);
}
quickSortCompute(int [] array, left, right) {
    if (left >= right) {
        return;
    }
    int pivot = array[(left + right) / 2];
    int index = partition(array, left, right, pivot);
    quickSortCompute(array, left, index);
    quickSortCompute(array, index+1, right);
}

int partition(int [] array, int left, int right, int pivot) {
    while (left <= right) {
        while(array[left] < pivot) {
            left++;
        }
        while(array[right] > pivot) {
            right--;
        }
        if (left <= right){
            swap(array, left, right);
            left++;
            right--;
        }
    }
    return left;
}