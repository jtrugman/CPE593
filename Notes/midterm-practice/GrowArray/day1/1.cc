class GrowArray {
private:
    int length;
    int* data;
    void grow() {
        int* old = data;
        data = new int[lenght+1];
        for (int i = 0; i < length; i++) {
            data[i] = old[i];
        }
        length++;
    }

public:
    GrowArray() : length(0), data(nullptr) {}

    void addEnd(int x) {
        grow();
        data[length - 1] = x; 
    }

    int removeEnd() {
        length--;
        return data[length];
    }
};