#include "Element.h"
Element::Element(ELEMENT strongerElement,ELEMENT weakerElement)
{
    this->strongerElement=strongerElement;
    this->weakerElement=weakerElement;
}
ELEMENT Element::getWeakerElement()const
{
    return this->weakerElement;
}
ELEMENT Element::getStrongerElement()const
{
    return this->strongerElement;
}
void Element::setWeakerElement(ELEMENT weakerElement)
{
    this->weakerElement=weakerElement;
}
void Element::setStrongerElement(ELEMENT strongerElement)
{
    this->strongerElement=strongerElement;
}
