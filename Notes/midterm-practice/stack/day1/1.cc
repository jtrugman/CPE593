class Stack {
private:
    class Node {
    public:
        int val;
        Node* next;
        Node(int v, Node* n) : val(v), next(n){}
    };

    Node* top;

public:
    bool isEmpty() {
        return top == nullptr;
    }

    int peek() {
        return top.data;
    }

    void push(int n) {
        Node node =  new Node(n, nullptr);
        node.next = top;
        top = node;
    } 

    int pop() {
        int data = top.data;
        top = top.next;
        return data;
    }
}