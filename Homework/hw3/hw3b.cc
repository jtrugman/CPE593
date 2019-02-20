/*
Author: Justin Trugman
HW3A - Quick Sort
Cite: Collaborators- KC Vasilas & David Lehman 
Reference: Professor's Classes Github Repository 

I pledge my honor that I abided by the Stevens Honor System
*/

#include <iostream>
#include <fstream>

using namespace std;


void quicksort(int x[], int L, int R) {
  if (R <= L)
    return;
  int pivot = (x[L] + x[R]) / 2;
  int i = L, j = R;


  while (i < j) {
    while (x[i]< pivot)
      i++;
    while(x[j] >= pivot)
      j--;
    swap(x[i], x[j]);
  }
  quicksort(x, L, i);
  quicksort(x, i+1, R);
}


int main (){
    int n;
    ifstream file("hw3.dat");
    if(file.is_open()) {
        file >> n;
        int x[n];
        for (int i = 0; i < n; i++){
            file >> x[i];
        }
        cout << n << '\n';
        for (int i = 0; i < n; i++){
            cout << x[i] << '\t';
        }
        quicksort(x, x[0], x[n-1]);


    }
}