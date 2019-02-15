#include <iostream>
using namespace std;

// One of professor's favorite algos == Its going to show up on either quiz or midterm or both

int random(int a, int b) {
    return a + random() % (b-a+1);
}

// a^n mod m
powermod(uint64_t a, uint64_t n, uint64_t m) {
    uint64_t prod = 1; // suppose a^49 = 1 + (3*16)     110001
    while(n > 0){
        if (n % 2 != 0)
            prod = (prod * a) % m;
        a = (a * a) % m;
        n = n/2;
    }
    return prod;
}


// Carmichael Number 562 = 3 * 11 * 17
bool fermat(int p, int k) {
    for (int i = 0; i < k; i++){
        int a = random(2, p-1);
        if (powermod(a, p-1, p) != 1)
            return false;
    }
    return true;
}

bool MillerRabin(uint64_t p, int k) {
    for (int i = 0; i < k; i++){
        int a = random(2, p-2);

        int s = 0;
        int d = p - 1;
        int mask = 1;
        while (d & mask == 0)
            s++;
        int x = powermod(a, d, p);
        if (x == 1 || x == -1)
            continue;
    }
}


int main() {
    cout << fermat(561, 5) << '\n';
    cout << fermat(1000, 5) << '\n';
    cout << fermat(1001, 5) << '\n';


}