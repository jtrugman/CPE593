FischerYates(int [] array, int n) {
    for (int i = n - 1; i >= 0; i--) {
        int pick = random(0, i); 
        swap(array[i], array[pick]);
    }
}