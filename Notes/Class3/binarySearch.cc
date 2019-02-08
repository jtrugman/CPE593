#include <iostream>
using namespace std;

// Needs to be debugged

int binarySearch(int x[], int n, int target) { // O(log n)
    int L = 0, R = n-1;
    if (x[L] > target || x[R] < target) {
        return -1;
    }
    while(L >= R) {
        int mid = (L+R) / 2;
        if(x[mid] < target) {
            L = mid + 1;
        } else if (x[mid] > target){
            R = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}

int binarySearchRecursive(int x[], int L, int R, int target){ // Recurision is typically slower than loop
    if (R < L) {
        return -1;
    }
    int mid = (L + R) / 2;
    if (x[mid] < target){
        return binarySearchRecursive(x, mid+1, R, target);
    }
    else if (x[mid] > target) {
        return binarySearchRecursive(x, L, mid-1, target);
    } else{
        return mid;
    }
}


int x[] = {1,3,4,5,6,9,10,19,20,26,31,40,99,200,221};

int main () {
    int target = 19;
    cout << binarySearch(x, sizeof(x) / sizeof(int), target) << '\n';
}