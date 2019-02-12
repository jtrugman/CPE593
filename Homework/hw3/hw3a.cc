/*
Author: Justin Trugman
HW3A - Insertion Sort
Cite: Collaborators- KC Vasilas & David Lehman 

I pledge my honor that I abided by the Stevens Honor System
*/

#include <iostream>
#include <fstream>

using namespace std;


void insertionSort(int array[], int length){
    for (int i = 1; i < length; i++){
        for (int j = i; j >= 1; j--){
            if(array[j] < array[j-1]){
                int temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
            } else {
                break;
            }
        }
    }

    cout << '\n';
    cout << length << '\n';
    for  (int i = 0; i < length; i++){
        cout << array[i] << '\t';
    }
}



int main() {
    int arrayLength;
    ifstream file("hw3.dat");
    if(file.is_open()){
        file >> arrayLength;
        int unsortedArray[arrayLength];
        for (int i = 0; i < arrayLength; i++){
            file >> unsortedArray[i];
        }

        cout << arrayLength << '\n';
        for  (int i = 0; i < arrayLength; i++){
        cout << unsortedArray[i] << '\t';
        }

        insertionSort(unsortedArray, arrayLength);
    }
}