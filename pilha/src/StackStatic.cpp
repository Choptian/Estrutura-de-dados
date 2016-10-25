#include "StackStatic.h"

StackStatic::StackStatic()
{
	top = -1;
}

StackStatic::~StackStatic()
{
	//dtor
}

void StackStatic::push (int num) {
    if ( (top + 1) == MAX) {
        cout << "ERRO :: Pilha cheia" << endl;
        return;
    }

    top++;
    data[top] = num;
}

void StackStatic::print() {
	cout << "PILHA ESTATICA (inteiros)" << endl;
	cout << "-------------------------" << endl;
    for (int i = top; i >= 0; i--) {
        cout << data[i] << endl;
    }
}

int StackStatic::peek() {
	if (top >= 0) {
		return data[top];
	}
	return -1;
}

int StackStatic::pop() {
    if (top >= 0) {
		top--;
		return data[top+1];
    }
    return -1;
}

int StackStatic::size() {
	return top+1;
}
