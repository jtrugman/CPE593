/*
Author: Justin Trugman
HW1B - Computer Choose (n,r)

I pledge my honor that I abided by the Stevens Honor System
*/

#include <iostream>
#include <random>
using namespace std;

double choose(int n, int r) {
    if (r == 0 || n == r){
        return 1;
    } else {
        return choose(n-1, r) + choose(n-1, r);
    }

}

int main() {
  int numTrials = 100000000;
	//  cin >> numTrials;
	default_random_engine generator;
	uniform_int_distribution<int> distribution(0,500);	

  for (int i = 0; i < numTrials; i++) {
		int n = distribution(generator);
		uniform_int_distribution<int> rdist(0,n);	
		int r = rdist(generator);
    choose(n,r);
	}
}