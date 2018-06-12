#pragma once
#include"Card.h"
#include"TypeElement.h"
class Monster:public Card
{
private:
    int attack;
    int defense;
    ELEMENT typeMonster;
    public:
        Monster();
        Monster(char*,TYPECARD,int,int,ELEMENT);
        int getAttack()const;
        int getDefense()const;
        ELEMENT getTypeMonster()const;
        TYPECARD getType()const;
        void setAttack(int);
        void setDefense(int);
        void setTypeMonster(ELEMENT);
        int BoostAttack(int);
        int BoostDefense(int);
        int ReduceAttack(int);
        int ReduceDefense(int);
        void print();


};
