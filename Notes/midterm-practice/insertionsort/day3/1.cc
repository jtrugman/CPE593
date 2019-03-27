insertionSort(int [] array, int n) {
    int i, key, j;
    for (int i = 1; i < n; i++) {
        key = array[i];
        j = i - 1;
        while (j > 0 && array[j] > key){
            array[j+i] = array[j];
            j = j - 1;
        }
        array[1 + j] = key;
    }
}