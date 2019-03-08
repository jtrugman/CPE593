#include <iostream>
using namespace std;

template<typename T>
class LinkedList {
private:
    class Node {
        int val;
        Node* next;
        Node (int v, Node* n) : val(v), next(n){}
    };
    Node* head;
public:
    LinkedList(){
        head = nullptr;
    }
    void addStart(int v) {
        head = Node(v, head);
    }
    void addEnd(int v) {
        Node* temp = new Node(v, nullptr);
        Node* p;
        if (head == nullptr){
            head = temp;
            return;
        }
        for (p = head; p->next != nullptr; p = p->next)
            ;
        p->next = temp;
    }

    void insert(int pos, int v){
        Node* p = head;
        while (pos > 0) {
            p = p-> next;
            pos--;
        }
        p-> next = new Node(v, p-> next);
    }

    int removeStart() {
        Node* temp = head;
        head = head->next;
        return temp-> val;
    }
    int removeEnd(){
        Node* p = head;
        Node* q = p->next;
        if (q == nullptr){
            int v = head -> val;
            head = nullptr;
            return v;
        }
        for (; q-> next != nullptr; p = q; q = q-> next)
            ;
        p-> next = nullptr;
        return q-> val;
    }

    friend ostream& operator<<(ostream& s, const LinkedList& list){
        for (Node* p = list.head; p != nullptr; p-> next)
            s << p-> val << '\t';
        return s;
    }
};