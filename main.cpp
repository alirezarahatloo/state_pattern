#include <iostream>
#include "state1.h"


int main()
{
    std::cout  << "hello world\n";
    Context *obj = new Context(new State1);
    obj->Request1();
    return 0;
}
