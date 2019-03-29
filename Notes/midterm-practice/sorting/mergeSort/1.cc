mergeSort(int [] array) {
    mergeSortCompute(array, new int[array.length], 0, array.length - 1);
}

mergeSortCompute(int [] array, int [] tempArray, int leftStart, int rightEnd){
    if (leftStart >= rightEnd) {
        return;
    }
    int mid = (leftStart + rightEnd) / 2;
    mergeSortCompute(array, tempArray, leftStart, middle);
    mergeSortCompute(array, tempArray, middle + 1, rightEnd);
    mergeHalves(array, tempArray, leftStart, rightEnd);
}

mergeHalves(int [] array, int [] tempArray, int leftStart, int RightEnd) {
    int size =  rightEnd - leftStart + 1;
    leftEnd = (leftStart + rightEnd) /2;
    int rightStart = leftEnd + 1;
    int left = leftStart;
    int right = rightStart;
    int index = leftStart;

    while (left <= leftEnd && right <= rightEnd) {
        if (array[left] <= array[right]) {
            tempArray[index] = array[left];
            left++;
        } else {
            tempArray[index] = array[right];
            right++;
        }
        index++;
    }
    
    arraycopy(array, left, tempArray, index, leftEnd - left -1);
    arraycopy(array, right, tempArray, index, rightEnd - right - 1);
    arraycopy(tempArray, leftStart, array, leftStart, size);
}