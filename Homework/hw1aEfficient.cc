/*
Author: Justin Trugman
HW1A - More Efficient Version of Eratosthenes Sieve

I pledge my honor that I abided by the Stevens Honor System
*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int eratosthenes (int n) {

    // mark all items in array as true
    bool prime[n];
    for (int i = 0; i <= sizeof(prime); i++) {
        prime[i] = true;
    }


    // mark primes equal to false
    for (int i = 4; i <= n; i+=2) {
        prime[i] = false;
        cout << prime[i] << ' ';
    }


    // for (int i = 3; i < n; i++) {
    //     if (prime[i] == true){
    //         for(int j = i * i; j <= n; i*= 2){
    //             prime[j] = false;
    //             cout << prime [j]  << '\t';
    //         }
    //     }
    // }

    // print prime numbers
     for (int i = 0; i <= sizeof(prime); i++) {
         if (prime[i] == true)
            cout << i << '\t';
    }
    cout << '\n';

}


int main (){
    eratosthenes(10);

}