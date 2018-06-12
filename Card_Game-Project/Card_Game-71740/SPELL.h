#pragma once
#include"Card.h"
#include"TypeElement.h"
class Spell:public Card
{
private:
    ELEMENT element;
    int boost;
    int AtkOrDef;
    public:
        Spell();
        Spell(char*,TYPECARD,ELEMENT,int,int);
        ELEMENT getElement()const;
        int getBoost()const;
        TYPECARD getType()const;
        int getAtkOrDef()const;
        void setAtkOrDef(int);
        void setElement(ELEMENT);
        void setBoost(int);
        void print();

};
