BinarySearch(int [] array, int key) {
    BinarySearchRecursive(array, key, 0, array.length -1);
}

BinarySearchRecursive(int [] array, int key, int left, int right) {
    if (left > right) {
        throw "Area Not Sorted";
    }
    int mid = (left + right) / 2;
    if (array[mid] == key) {
        return mid;
    } else if (array[mid] > key) {
        return BinarySearchRecursive(array, key, left, mid - 1);
    } else {
        return BinarySearchRecursive(array, key, mid + 1, right);
    }
}