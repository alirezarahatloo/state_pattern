#ifndef CONTEXT_H
#define CONTEXT_H

#include "state.h"
#include <typeinfo>
#include <iostream>


class State;

class Context
{
    private:
        State *state_;
    public:
    Context(State *state);
    void TransitionTo(State *state);
    ~Context();
    void Request1();
    void Request2();
};

#endif

