#include "context.h"

using namespace std;

Context::Context(State *state)
{
    this->TransitionTo(state);
}
void Context::TransitionTo(State *state)
{
    cout << "hi alireza\n"; 
    if(this->state_ !=nullptr)
        delete this->state_;
    this->state_ = state;
    this->state_->set_context(this);
}
Context::~Context()
{
    delete state_;
}

void Context::Request1()
{
    this->state_->Handle1();
}

void Context::Request2()
{
    this->state_->Handle2();
}
