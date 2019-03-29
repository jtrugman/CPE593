class BinaryTree {
private:
    class Node {
        Node* left;
        Node* right;
        int data;
        Node(int data, Node* left, Node* right) : data(data), right(right), left(left) {}
    };
    Node* root;
public:
    void insert(int value) {
        if (value <= data) {
            if (left == null) {
                left = new Node(value, nullptr, nullptr);
            } else {
                left.insert(value);
            }
        } else {
            if (right == null) {
                right = new Node(value, nullptr, nullptr);
            } else {
                right.insert(value);
            }
        }
    }

    bool contains(int value) {
        if (value == data) {
            return true;
        } else if (value < data) {
            if (left == nullptr) {
                return false;
            } else {
                return left.contains(value);
            }
        } else if (value > data) {
            if (right == nullptr) {
                return false;
            } else {
                return right.contains(value);
            }
        }
    }

    void printInOrder() {
        if (left != nullptr) {
            left.printInOrder();
        } 
        cout << data << '\t';
        if (right != nullptr) {
            right.printInOrder();
        }
    }
}