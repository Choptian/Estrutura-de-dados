#ifndef STACKDYNAMIC_H
#define STACKDYNAMIC_H

#include <iostream>
#include <string>

using namespace std;

struct Element {
	private:
		int id;
		string info;
		Element* next;

	public:
		Element(int id, string info);
		virtual ~Element();
		void print();

		// getters e setters
		void setNext(Element* next);
		Element* getNext();
};

struct StackDynamic {
	private:
		Element* top;
		void print_r(Element* p);

	public:
		StackDynamic();
		virtual ~StackDynamic();

		void push(Element* e);
		Element* peek();
		Element* pop();
		int size();
		void print();
};

#endif // STACKDYNAMIC_H
