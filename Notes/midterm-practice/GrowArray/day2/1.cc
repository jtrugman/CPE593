class GrowArray{
private:
    int length;
    int* data;

    void grow() {
        int* old = data;
        data = new int[length+1];
        for (int i = 0; i < length; i++){
            data[i] = old[i];
        }
        length++;
    }

public:
    GrowArray() : length(0), data(nullptr) {}

    void addEnd(int n) {
        grow();
        data[length-1] = n;
    }


    int removeEnd() {
        length--;
        return data[length];
    }
}