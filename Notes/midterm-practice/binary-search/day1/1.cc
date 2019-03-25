BinarySearchRecursive(int [] array, int key) {
    return BinarySearchRecursiveCompute(array, key, 0, array.length - 1);
}

BinarySearchRecursiveCompute(int [] array, int key, int left, int right) {
    if (left > right) {
        return false;
    }

    int mid = (left + right) / 2;
    if (array[mid] == key) {
        return mid;
    } else if (array[mid] > key) {
        return BinarySearchRecursiveCompute(array, key, left, mid - 1);
    } else {
        return BinarySearchRecursiveCompute(array, key, mid + 1, right);
    }
}