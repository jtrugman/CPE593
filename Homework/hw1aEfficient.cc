/*
Author: Justin Trugman
HW1A - Eratosthenes Sieve Efficient 

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
    for (int j = 4; j <= n; j+=2){
        prime[j] = false;
    }

    for (int i = 3; i <= n; i++){
        if (prime[i] == true) {
            for (int j = i*i; j <= n; j+=2*i){
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
    eratosthenes(10);

}