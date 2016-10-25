#ifndef STACKSTATIC_H
#define STACKSTATIC_H

#include <iostream>

using namespace std;

struct StackStatic {

private:
    static const int MAX = 10;
    int top; // size da lista sequencial
    int data[MAX];

public:
	StackStatic();
	virtual ~StackStatic();

	void push(int num);
	int peek();
	int pop();
	int size();
	void print();
};

#endif // STACKSTATIC_H
