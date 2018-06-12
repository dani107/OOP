#pragma once
#include"Card.h"
#include"Monster.h"
#include"SPELL.h"
#include"Trap.h"
class Deck
{
   private:
       Card** cards;
       int countCards;
       void copy(const Deck& other);
       void destroy();
   public:
    Deck();
    Deck(Card**,int);
    Deck(const Deck& other);
    Deck& operator=(const Deck& other);
    virtual ~Deck();
    Card** getCards()const;
    int getCountCards()const;
    void setCards(Card**,int);
    void setCountCards(int);
    void AddCard(Card* other);
    void print();
};
