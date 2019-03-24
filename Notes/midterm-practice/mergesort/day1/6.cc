mergesort(int [] array) {
    mergesortCompute(array, new int[array.length] , 0, array.length -1);
}

mergesortCompute(int[] array, int[] tempArray, int leftStart, int rightEnd) {
    if (leftStart >= rightEnd) {
        return;
    }
    int middle = (leftStart + rightEnd) / 2;
    mergesortCompute(array, tempArray, leftStart, middle -1);
    mergesortCompute(array, tempArray, middle, rightEnd);
    mergeHalves(array, tempArray, leftStart, rightEnd);
}

mergeHalves(int[] array, int[] tempArray, int leftStart, int rightEnd){
    int leftEnd = (leftStart + rightEnd) / 2;
    int rightStart = leftEnd + 1;
    int size =  rightEnd - leftStart + 1;

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
  


    System.arraycopy(array, left, tempArray, index, leftEnd - left - 1);
    System.arraycopy(array, right, tempArray, index, rightEnd - right - 1);
    System.arraycopy(tempArray, leftStart, array, leftStart, size);

}