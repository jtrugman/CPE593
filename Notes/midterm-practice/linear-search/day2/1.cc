LinearSearch(int [] array, int key, int n) {
    for (int i = 0; i < n; i++) {
        if (array[i] == key) {
            return i;
        }
    }
    return -1;
}