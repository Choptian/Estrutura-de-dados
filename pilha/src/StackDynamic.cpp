#include "StackDynamic.h"

Element::Element(int id, string info) {
	this->id = id;
	this->info = info;
}

Element::~Element()
{

}

void Element::print() {
    cout << "{" << id << ", " << info << "}" << endl;
}

void Element::setNext(Element* next) {
    this->next = next;
}

Element* Element::getNext() {
	return next;
}

StackDynamic::StackDynamic()
{
	top = NULL;
}

StackDynamic::~StackDynamic()
{

}

void StackDynamic::push(Element* e)
{
	e->setNext(top);
	top = e;
}

Element* StackDynamic::peek()
{

}

Element* StackDynamic::pop()
{

}

int StackDynamic::size()
{

}

void StackDynamic::print()
{
	cout << "PILHA DINAMICA (elementos)" << endl;
	cout << "--------------------------" << endl;
	print_r(top);
}

void StackDynamic::print_r(Element* p) {
	if (p) {
		p->print();
		print_r(p->getNext());
	}
}
