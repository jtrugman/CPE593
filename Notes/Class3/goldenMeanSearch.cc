#include <iostream>
using namespace std;

const double phi =; // INSERT PHI FORMULA

int goldenMeanSearch(int data[], int n){
    int L = 0, R = n-1;
    int x,y;

    while (L < R){
        int s = (R-L) / phi;
        x  = R - s, y = L + s;
        data[x]    data[y];
    }
}