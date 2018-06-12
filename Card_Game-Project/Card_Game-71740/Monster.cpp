#include "Monster.h"

Monster::Monster()
{
    attack=0;
    defense=0;
}
Monster::Monster(char* name,TYPECARD type,int attack,int defense,ELEMENT typeMonster):Card(name,type)
{
    if(attack>=0 && defense>=0)
  {
    this->attack=attack;
    this->defense=defense;
    this->typeMonster=typeMonster;
  }
  else
    cout<<"Please, enter correct data! ;)";
}
int Monster::getAttack()const
{
    return this->attack;
}
int Monster::getDefense()const
{
    return this->defense;
}
ELEMENT Monster::getTypeMonster()const
{
    return this->typeMonster;
}
TYPECARD Monster::getType()const
{
    return MONSTER;
}
void Monster::setAttack(int attack)
{
    this->attack=attack;
}
void Monster::setDefense(int defense)
{
    this->defense=defense;
}
void Monster::setTypeMonster(ELEMENT typeMonster)
{
    this->typeMonster=typeMonster;
}
int Monster::BoostAttack(int x)
{
    this->attack += x;
    return this->attack;
}
int Monster::BoostDefense(int x)
{
    this->defense += x;
    return this->defense;
}

int Monster::ReduceDefense(int x)
{
    this->defense -= x;
    return this->defense;
}
int Monster::ReduceAttack(int x)
{
    this->attack -= x;
    return this->attack;
}
void Monster::print()
{

    cout<<"Monster name:";
    Card::print();
    cout<<endl;
    cout<<"Element:"<<this->typeMonster<<endl;
    cout<<"Attack:"<<this->attack<<endl;
    cout<<"Defense:"<<this->defense<<endl;
}
