#ifndef STATE_H
#define STATE_H

#include "context.h"

class Context ;

class State
{
    protected:
        Context *context_;
    public:
        void set_context(Context *context);
        virtual void Handle1() = 0;
        virtual void Handle2() = 0;
    

};


#endif