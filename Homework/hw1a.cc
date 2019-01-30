/*
Author: Justin Trugman
HW1A - Eratosthenes Sieve

I pledge my honor that I abided by the Stevens Honor System
*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void eratosthenes (int n) {

    // mark all items in array as true
    bool prime[n];
    for (int i = 0; i <= sizeof(prime); i++) {
        prime[i] = true;
    }


    // mark primes equal to false
    for (int i = 2; i <= sqrt(n); i++){
        if (prime[i] == true){
            for(int j = i * 2; j <= n; j += i){
                prime[j] = false;
            }
        }
    }


    // print prime numbers
     for (int i = 2; i <= sizeof(prime); i++) {
         if (prime[i] == true)
            cout << i << '\t';
    }
    cout << '\n';

}


int main (){
    eratosthenes(100);

}