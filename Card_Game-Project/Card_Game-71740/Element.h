#pragma once
#include"TypeElement.h"
class Element
{
    public:
        ELEMENT weakerElement;
        ELEMENT strongerElement;
        Element(ELEMENT,ELEMENT);
        ELEMENT getWeakerElement()const;
        ELEMENT getStrongerElement()const;
        void setWeakerElement(ELEMENT);
        void setStrongerElement(ELEMENT);
};
