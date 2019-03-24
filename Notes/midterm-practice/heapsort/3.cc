heapsort(int [] array, int n) {
    for (int i = 2/n -1; i >=0; i--){
        heapify(array, n, i);
    }

    for (int i = n -1; i >= 0; i--){
        swap(array[0], array[i]);
        heapify(array, n, 0);
    }
}

heapify(int [] array, int n, int i){
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if (left < n && array[left] > array[largest]){
        largest = left;
    }
    if (right < n && array[right] > array[largest]){
        largest = right;
    }

    if (largest != i) {
        swap(array[i], array[largest]);
        heapify(array, n, largest);
    }
}