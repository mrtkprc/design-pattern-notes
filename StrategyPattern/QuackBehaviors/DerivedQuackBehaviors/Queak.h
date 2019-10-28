#pragma  once
#include "../IQuackBehavior.h"

class Queak : public IQuackBehavior{
public:
    void quack() override;
};
