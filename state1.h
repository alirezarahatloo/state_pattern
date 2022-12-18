#include <iostream>
#include "state.h"

class State1 : public State
{
    private:

    public:
        State1();
        void Handle1() override;
        void Handle2() override;
};