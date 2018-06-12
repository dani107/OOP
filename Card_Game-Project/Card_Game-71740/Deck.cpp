#include "Deck.h"
void Deck::copy(const Deck& other)
{
    cards = new Card*[other.countCards];
    for(int i=0;i<other.countCards;++i)
    {
        cards[i]=other.cards[i];
    }
    countCards=other.countCards;
}
void Deck::destroy()
{
    delete[]cards;
}
Deck::Deck()
{
   cards = NULL;
   countCards=0;
}
Deck::Deck(Card** cards,int countCards)
{
    this->cards = new Card*[countCards];
    for(int i=0;i<countCards;++i)
    {
        this->cards[i]=cards[i];
    }
    this->countCards=countCards;
}
Deck::Deck(const Deck& other)
{
    copy(other);
}
Deck& Deck::operator=(const Deck& other)
{
    if(this!=&other)
    {
        destroy();
        copy(other);
    }
    return *this;
}
Deck::~Deck()
{
    destroy();
}
Card** Deck::getCards()const
{
    return this->cards;
}
int Deck::getCountCards()const
{
    return this->countCards;
}
void Deck::setCards(Card** cards,int countCards)
{
    if(this->countCards != countCards)
    {
        destroy();
        this->cards = new Card*[countCards];
    for(int i=0;i<countCards;++i)
    {
        this->cards[i]=cards[i];
    }
    this->countCards=countCards;
    }
    else
     {
        for(int i=0;i<countCards;++i)
      {
        this->cards[i]=cards[i];
      }
     }
}
void Deck::setCountCards(int countCards)
{
    this->countCards=countCards;
}
void Deck::AddCard(Card* other)
{
    Card** temp = new Card*[countCards+1];
    for(int i=0;i<=countCards;i++)
        temp[i]=cards[i];
    delete[]cards;
    cards=temp;
    this->cards[countCards]=other;
    countCards++;
}
void Deck::print()
{
     for(int c = 0; c < countCards; c++)
    {
        cards[c]->print();
        cout<<"============"<<endl;
    }
}
