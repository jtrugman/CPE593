#include <iostream>
using namespace std;

class GrowArray {
private: 
    int* data;
    uint32_t len;

public:
    GrowArray() : data(nullptr), len(0) {} // O(1)
    void addEnd() { // O(n)
        int* old = data;    // O(1)
        data = new int[len + 1];    // In C++ O(1), in Java O(n)
        for (int i = 0; i < len; i++) { // O(len)
            data[i] = old[i];
        delete [] old;  // O(1) -- Required on the test!! Must recognize that the old memory is deleted 
        }
    }
};

int main() {
    GrowArray a;
    for (int i = 1; i < n; i++) // O(n)
        a.addEnd(5); // O(n)
}

