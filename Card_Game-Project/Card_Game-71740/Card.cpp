#include "Card.h"
void Card::mystrcopy(char* &dest,char* src)
{
    int len=strlen(src)+1;
    dest = new char[len];
    strcpy(dest,src);
}
void Card::copy(const Card& other)
{
    mystrcopy(name,other.name);
    type=other.type;
}
void Card::destroy()
{
    delete[]name;
}
Card::Card()
{
    name=NULL;
}
Card::Card(char* name,TYPECARD type)
{
    mystrcopy(this->name,name);
    this->type=type;
}
Card::Card(const Card& other)
{
     copy(other);
}
Card& Card::operator=(const Card& other)
{
    if(this!=&other)
    {
        destroy();
        copy(other);
    }
    return *this;
}
Card::~Card()
{
    destroy();
}
char* Card::getName()const
{
    return this->name;
}
TYPECARD Card::getType()const
{
    return this->type;
}
void Card::setName(char* name)
{
    destroy();
    mystrcopy(this->name,name);
}
void Card::setType(TYPECARD type)
{
    this->type=type;
}
void Card::print()
{
    cout<<this->name<<endl;
}
