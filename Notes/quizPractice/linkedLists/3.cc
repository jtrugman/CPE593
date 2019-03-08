#include <iostream>
using namespace std;

class LinkedList{
private:
    class Node {
        int val;
        Node* next;
        Node(int v, Node* n) : val(v), next(n) {}
    };
    Node* head;
public:
    LinkedList() {
        head = nullptr;
    }
    // addStart
    void addStart(int v){
        head = Node(v, head);
    }
    // addEnd
    void addEnd(int v) {
        Node* temp = new Node(v, head);
        Node* p;

        if (head == nullptr){
            head = temp;
            return;
        }
        for (p = head; p-> next != nullptr; p = p-> next)
            ;
        p-> next = temp;

    }

    // insert
    // removeStart
    // removeEnd
};