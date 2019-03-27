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

    void addStart(int x) {
        head = new Node(x, head);
    }

    void addLast(int x) {
        Node* temp = new Node(x, nullptr);
        Node p;

        if (head == nullptr) {
            head = temp;
            return;
        }

        for (p = head; p->next != nullptr; p=p->next) {
            ;
        }
        p->next = temp;
    }

    int removeLast() {
        Node* q;
        if (head == nullptr){
            return;
        }
        if (head -> next ==  nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        for (Node* p = head; p-> next != nullptr; q=p, p=p->next){
            ;
        }
        Node* temp = q-> next;
        q->next  = nullptr;
        delete temp;
    }

    void copy(const LinkedList& orig) {
        for (Node* p = orig.head; p-> next!= nullptr; p=p->next) {
            this.addLast(p.val);
        }
    }

    int size() {
        int counter;
        if (head == nullptr) {
            return 0;
        }
        for (Node* p = head; p->next != nullptr; p=p->next) {
            counter++;
        }
        return counter;
    }
};