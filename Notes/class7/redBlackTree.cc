#include <iostream>
using namespace std;

class RBTree {
private:
    class Node {
    public:
        int val;
        enum Color{ RED, BLACK};

        Node* left;
        Node* right;
        Node* parent;
        Node(int v, Node* L, Node* R, Node* P) : val(v), left(L), right(R), parent(P) {}
    };

    Node* root;

public:
    RBTree() : root(nullptr) {}
    void add(int v){
        Node* p = root;
        if (p == nullptr) {
            root = new Node(v, nullptr, nullptr, nullptr);
        } else {
            do {
                if (v > p-> val) {
                   if (p->right == nullptr){
                       p->right = new Node(v, nullptr, nullptr, p);
                       insertFixUpTree(p->right);
                       return;
                   } else{
                       p = p-> right;
                   }
                } else {
                    if (p->left == nullptr){
                        p->left = new Node(v, nullptr, nullptr, p);
                        insertFixUpTree(p->left);
                        return;
                    } else {
                        p = p-> left;
                    }
                }
            } while (p != nullptr);
        }

    }

    void insertFixUpTree(Node* n){
        if (parent(n) == nullptr) {
            n->color = BLACK;
        } else if (parent(n)->color == BLACK) {
        return;
        } else if (uncle(n) != nullptr && uncle(n)->color == RED) {
        case3(n);
        } else {
        insert_case4(n);
        }
    }
   
   void case3(struct node* n){
       
   }

};