#pragma once
#include<iostream>
#include<cstring>
#include"Typecard.h"
using namespace std;
class Card
{
    protected:
            char* name;
            TYPECARD type;
            void mystrcopy(char* &dest,char* src);
            void copy(const Card& other);
            void destroy();

    public:
        Card();
        Card(char*,TYPECARD);
        Card(const Card& other);
        Card& operator=(const Card& other);
        virtual ~Card();
        char* getName()const;
        virtual TYPECARD getType()const;
        void setName(char*);
        void setType(TYPECARD);
        virtual void print();


};
