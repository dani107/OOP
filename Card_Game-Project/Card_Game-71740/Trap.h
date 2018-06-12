#pragma once
#include"Card.h"
class Trap:public Card
{
private:
    int reduce;
    int AtkOrDef;
    public:
        Trap();
        Trap(char*,TYPECARD,int,int);
        TYPECARD getType()const;
        int getReduce()const;
        int getAtkOrDef()const;
        void setReduce(int);
        void setAtkOrDef(int);
        void print();

};
