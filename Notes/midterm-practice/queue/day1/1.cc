class Queue{
private:
    class Node {
    public:
        int val;
        Node* next;
        Node(int v, Node* n): val(v), next(n) {}
    }

    Node* head;
    Node* tail;

public:
    Queue() {
        head = nullptr;
        tail = nullptr;
    }

    bool isEmpty() {
        return head == nullptr;
    }

    int peek() {
        return head.data;
    }

    void add(int data) {
        Node node = new Node(data, nullptr);
        if (tail != nullptr) {
            tail.next = node;
        }
        tail = node;
        if (head == null) {
            head = node;
        }
    }

    int remove () {
        int data = head.data;
        head = head.next;
        if (head == nullptr) {
            tail = null;
        }
        return data;
    }
};