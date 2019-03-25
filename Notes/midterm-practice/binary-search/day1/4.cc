BinarySearch(int [] array, int key) {
    return BinarySearchRecursive(array, key, 0, array.length - 1);
}

BinarySearchRecursive(int [] array, int key, int left, int right) {
    if (left  > right) {
        return error;
    }
    int mid = (left + right) / 2;
    if (array[mid] == key) {
        return mid;
    } else if (key < array[mid]) {
        return BinarySearchRecursive(array, key, left, mid - 1);
    } else {
        return BinarySearchRecursive(array, key, mid + 1, right);
    }


}