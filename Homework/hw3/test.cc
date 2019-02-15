#include <iostream>
#include <fstream>

using namespace std;
void quickSort(int arr[], int left, int right) {

      int i = left, j = right;

      int tmp;

      int pivot = arr[(left + right) / 2];

 

      /* partition */

      while (i <= j) {

            while (arr[i] < pivot)

                  i++;

            while (arr[j] > pivot)

                  j--;

            if (i <= j) {

                  tmp = arr[i];

                  arr[i] = arr[j];

                  arr[j] = tmp;

                  i++;

                  j--;

            }

      };

 

      /* recursion */

      if (left < j)

            quickSort(arr, left, j);

      if (i < right)

            quickSort(arr, i, right);

    cout << '\n';
    for (int i = 0; i < right; i++){
            cout << arr[i] << '\t';
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