paritalquicksort(x, L, R){
    if (R - L > k)
        paritalquicksort(x, L, i);
    if (R - i+1 > k)
        partialquicksort(x, i+1, R);
}



knuthquicksort(int x[], int n){
    partialquicksort(x, 0, n-1); // k = minimum size = ????
   
    // k = 2 quicksort, k = 2000 insertion sort is doing too much
    insertionsort(x);
}