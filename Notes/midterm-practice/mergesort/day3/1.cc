mergesort(int array) {
    mergesortCompute(array, new int [array.length], 0, array.length -1);
}

mergesortCompute(int [] array, int [] tempArray, int leftStart, int rightEnd) {
    if (leftStart >= rightEnd) {
        return;
    }

    int mid = (leftStart + rightEnd) / 2;
    mergesortCompute(array, tempArray, leftStart, mid);
    mergesortCompute(array, tempArray, mid + 1, rightEnd);
    mergeHalves(array, tempArray, leftStart, rightEnd);
}

mergeHalves(int [] array, int [] tempArray, int LS, int RE) {
    int index = LS;
    int LE = (LS + RE) / 2;
    int RS = LE + 1;
    int R = RS;
    int L = LS;
    int size  = RE - LS + 1;

    while (L <= LE && R <= RE) {
        if (array[left] <= array[right]) {
            tempArray[index] = array[left];
            left ++;
        } else {
            tempArray[index] =  array[right];
            right ++;
        }
        index ++;
    }

    System.arraycopy(array, L, tempArray,index, LE- L + 1);
    System.arraycopy(array, R, tempArray, index RE - R + 1);
    System.arraycopy(tempArray, LS, array, LS, size);
}