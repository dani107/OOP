#include "Spell.h"

Spell::Spell()
{
    boost=0;
}
Spell::Spell(char* name,TYPECARD type,ELEMENT element,int boost,int AtkOrDef):Card(name,type)
{
    this->element=element;
    this->AtkOrDef=AtkOrDef;
    this->boost=boost;
}
ELEMENT Spell::getElement()const
{
    return this->element;
}
int Spell::getBoost()const
{
    return this->boost;
}
int Spell::getAtkOrDef()const
{
    return this->AtkOrDef;
}
TYPECARD Spell::getType()const
{
    return SPELL;
}
void Spell::setElement(ELEMENT element)
{
    this->element=element;
}
void Spell::setBoost(int boost)
{
    this->boost=boost;
}
void Spell::setAtkOrDef(int AtkOrDef)
{
    this->AtkOrDef=AtkOrDef;
}
void Spell::print()
{
    cout<<"Spell name:";
    Card::print();
    cout<<endl;
    cout<<"Boost with"<<this->boost<<endl;
    cout<<"Element who will boost:"<<this->element<<endl;
}
