class Queue {
private:
    class Node {
        int data;
        Node* next;
        Node(int val, Node* n) : data(val), next(n) {}
    }

    Node* head;
    Node* tail;

public:
    Queue() {
        head = nullptr;
        tail = nullptr;
    }
    void isEmpty() {
        return head == nullptr;
    }

    void peek() {
        return head.data;
    }

    void add(int a) {
        Node*  node =  new Node(a, nullptr);
        if (tail != null) {
            node.next = tail;
        }
        tail = node;
        if (head == nullptr) {
            head = node;
        }
    }

    int remove() {
        int data = head.data;
        head = head.next;
        if (head == nullptr) {
            tail = null;
        }
        return data;
    }
}