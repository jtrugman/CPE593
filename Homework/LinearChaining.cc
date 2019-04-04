/*
    Homework: HashMapLinearChaining 
    Author: Justin Trugman
    Collaborators: Dave Lehman, KC Vasilas. Assistance from Joe Puciloski 

    I pledge my honor that I abided by the Stevens Honor System
 */

#include <iostream>
#include <fstream>
#include <sstream>

#include <vector>
#include <string>

#include <algorithm>
#include <stdio.h>
using namespace std;


class HashMapLinearChaining {
private:
	vector <string>* table;
	int size;


public:
	HashMapLinearChaining(){
		size = 26;
		table = new vector<string>[size];
	}

	int hashFunction(const string& s) const {
		int sum = 0;
		for (unsigned int i = 0; i < s.size(); i++)
			sum = (sum * 26 + s[i]) % size;
		return sum % size;
	}

	void add(string s) {
		(table[hashFunction(s)]).push_back(s);
	}

	void checkDictionary(const string& s){
		if(find(table[hashFunction(s)].begin(), table[hashFunction(s)].end(), s) != table[hashFunction(s)].end())
			cout << "true" << '\n';
		else
			cout << "false" << '\n';
	}
	void displayHistogram(){
		for (int i = 0; i < 26; i++)
			cout << i << " " << table[i].size()<< '\n';
	}
};

int main() {
	HashMapLinearChaining m;
	ifstream f ("dict.txt");
	string word;
	while(f >> word){
		m.add(word);
	}
	
	ifstream g ("hw8.dat");
	string check;
	while(g >> check){
		m.checkDictionary(check);
	}
	
	
	m.displayHistogram();

	return 0;
}


