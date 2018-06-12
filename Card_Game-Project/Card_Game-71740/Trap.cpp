#include "Trap.h"

Trap::Trap():Card()
{
   reduce = 0;
}
Trap::Trap(char* name,TYPECARD type,int reduce,int AtkOrDef):Card(name,type)
{
    this->reduce=reduce;
    this->AtkOrDef=AtkOrDef;
}
TYPECARD Trap::getType()const
{
    return TRAP;
}
int Trap::getReduce()const
{
    return this->reduce;
}
int Trap::getAtkOrDef()const
{
    return this->AtkOrDef;
}
void Trap::setReduce(int reduce)
{
    this->reduce=reduce;
}
void Trap::setAtkOrDef(int AtkOrDef)
{
    this->AtkOrDef=AtkOrDef;
}
void Trap::print()
{
    cout<<"Trap name:";
    Card::print();
    cout<<endl;
    cout<<"Reduce with:"<<this->reduce<<endl;
}
