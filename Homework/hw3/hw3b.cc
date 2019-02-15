/*
Author: Justin Trugman
HW3A - Quick Sort
Cite: Collaborators- KC Vasilas & David Lehman 

I pledge my honor that I abided by the Stevens Honor System
*/

#include <iostream>
#include <fstream>

using namespace std;


void quickSort(int x[], int left, int right) {

  int i = left, j = right;
  int pivot = (x[left] + x[right])/2;

  while (i <= j) {
    while (x[i] < pivot) {
      i++;
    }
    while (x[j] > pivot) {
      j--;
    }

    if (i <= j) {
      int tmp = x[i];
      x[i] = x[j];
      x[j] = tmp;
      i++;
      j--;
    }
  }

  if (left < j) {
    quickSort(x, left, j);
  }

  if (i < right) {
    quickSort(x, i, right);
  }
    cout << '\n';
    for (int i = 0; i < right; i++){
        cout << x[i] << '\t';
    }
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
        quickSort(x, x[0], x[n-1]);


    }
}