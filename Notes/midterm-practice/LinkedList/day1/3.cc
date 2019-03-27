class LinkedList {
private:
    class Node {
    public:
        int val;
        Node* next;
        Node(int v, Node* n) : val(v), next(n) {}
    };

    Node* head;

public:

    LinkedList() {
        head = nullptr;
    }

    void addStart(int n) {
        head = new Node(n, head);
    }

    void addEnd(int n) {
        Node* temp = new Node(n, nullptr);
        Node* p;
        if (head == nullptr) {
            head = temp;
            return;
        }
        for (p = head; p->next != nullptr; p=p->next) {
            ;
        }
        p = temp;
    } 

    // WRONG
    int removeEnd() {
        Node* p;
        if (head == nullptr){
            return;
        }
        for (p = head; p->next != nullptr; p=p-> next) {
            ;
        }
        delete p;
    } 

    void copy(const Node& orig) {
        for (Node* p = orig; p->next != nullptr; p=p->next) {
            this.addEnd(p.val);
        }
    }

    int size() {
        if (head == nullptr) {
            return 0;
        }
        int counter = 0;
        for (Node* p = head; p->next != nullptr; p = p-> next) {
            counter ++;
        }
        return counter;
    }
};