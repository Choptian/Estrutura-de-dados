#include <iostream>
#include "StackStatic.h"
#include "StackDynamic.h"

using namespace std;

int main()
{
    StackStatic* s = new StackStatic();
    s->push(5);
    s->push(9);
    s->push(2);
    s->push(4);
	s->pop();
	s->print();

    cout << "top:  " << s->peek() << endl;
    cout << "size: " << s->size() << endl;

    cout << endl;

    StackDynamic* sd = new StackDynamic();
    sd->push(new Element(1, "um"));
    sd->push(new Element(2, "dois"));
    sd->push(new Element(3, "tres"));
    sd->push(new Element(4, "quatro"));
	sd->print();

    return 0;
}
