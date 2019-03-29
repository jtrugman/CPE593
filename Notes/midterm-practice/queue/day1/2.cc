class Queue{
private:
    class Node{
    public:
        int val;
        Node* next;
        Node(int v, Node* next) : val(v), next(n) {}
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

    int add(int a) {
        Node node = new Node(a, nullptr);
        if (tail != nullptr) {
            tail.next = node;
        }
        tail = node;
        if (head == null) {
            head = null;
        }
    }

    int remove() {
        int data = head.data;
        head = head.next;
        if (head == nullptr) {
            tail =  null;
        }
        return data;
    }

    int peek() {
        return head.data;
    }


};

