/*
Author: Justin Trugman
Homework 4B
Collaborators: David Lehhman, Joe Puciloski

*/
#include<fstream>
#include<sstream>
#include<string>
#include<iostream>

using namespace std;

class DoubleLinkedList2{
private:
	class Node{
	public:
		int val;
		Node* prev;
		Node* next;
		Node (int val, Node* prev, Node* next): val(val), prev(prev), next(next) {}
	};
	Node* head;
	Node* tail;
public:
	DoubleLinkedList2() : head(nullptr), tail(nullptr) {}
	~DoubleLinkedList2(){
		Node* q;
		for (Node* p = head; p!= nullptr; p = q){
			q = p->next;
			delete p;
		}
	}


	friend ostream& operator <<(ostream& s, DoubleLinkedList2 list){
		for(Node* p = list.head; p != nullptr; p = p->next)
			s << p->val<<',';
		return s;
	}
	void addStart(int val){
		if(head == nullptr){
			head = tail = new Node(val, nullptr, nullptr);
			return;
		}
		Node* list = new Node(val, nullptr, head);
		head->prev = list;
		head = list;
	}
	void addEnd(int val){
		if(head == nullptr){
			head = tail = new Node(val, nullptr, nullptr);
			return;
		}
		Node* list = new Node(val, tail, nullptr);
		tail->next = list;
		tail = list;
	}
	void removeEnd(){
		if(tail == nullptr)
			return;
		if(head->next == nullptr){
			delete head;
			head = tail = nullptr;
		}
		Node* list  = tail;
		tail = tail -> prev;
		delete list;
		tail -> next = nullptr;
	}
	void removeStart(){
		if(head == nullptr)
			return;
		if(head-> next == nullptr){
			delete head;
			head = tail = nullptr;
		}
		Node* list = head;
		head = head-> next;
		delete list;
		head-> prev = nullptr;
	}
};

int main(){
	ifstream file ("HW4b.txt");
	DoubleLinkedList2 list;
	string inputString;
	while(file >> inputString){
		if(inputString == "OUTPUT")
			cout << list << '\n';
		else if (inputString == "ADD_FRONT"){
			string inputNum;
			file >> inputNum;
			int position, start, step, end;

			position = inputNum.find(":");
			stringstream strTointa(inputNum.substr(0, position));
			strTointa >> start;
			inputNum.erase(0, position + 1);

			position = inputNum.find(":");
			stringstream strTointb(inputNum.substr(0, position));
			strTointb >> step;
			inputNum.erase(0, position + 1);

			stringstream strTointc(inputNum);
			strTointc >> end;
			for (int i = start; i <= end; i += step){
				list.addStart(i);
			}
		}
		else if (inputString == "ADD_BACK"){
			string inputNum;
			file >> inputNum;
			int position, start, step, end;

			position = inputNum.find(":");
			stringstream strTointa(inputNum.substr(0, position));
			strTointa >> start;
			inputNum.erase(0, position + 1);

			position = inputNum.find(":");
			stringstream strTointb(inputNum.substr(0, position));
			strTointb >> step;
			inputNum.erase(0, position + 1);

			stringstream strTointc(inputNum);
			strTointc >> end;

			for (int i = start; i <= end; i += step)
				list.addEnd(i);
		}
		else if (inputString == "REMOVE_BACK"){
			string inputNum;
			file >> inputNum;
			int a;
			stringstream strToint(inputNum);
			strToint >> a;
			for (int i = a; i > 0; i--)
				list.removeEnd();
		}
		else if (inputString == "REMOVE_FRONT"){
			string inputNum;
			file >> inputNum;
			int a;
			stringstream strToint(inputNum);
			strToint >> a;
			for (int i = a; i > 0; i--)
				list.removeStart();
		}
	}
	file.close();
}
