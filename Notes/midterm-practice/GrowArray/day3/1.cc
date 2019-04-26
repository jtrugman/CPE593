class GrowArray{
private:
    int* data;
    int length;

    void grow() {
        int* old = data;
        int data = new int[length+1];
        for (int i = 0; i < length; i++) {
            data[i] = old[i];
        }
        length++;
    }

public:
    GrowArray() : length(0), data(nullptr) {}

    void addEnd(int n) {
        grow();
        data[length -1] = n;
    }


    int removeEnd() {
        length--;
        return data[length];
    }
}