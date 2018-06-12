#include <iostream>
#include"Card.h"
#include"Trap.h"
#include"SPELL.h"
#include"Monster.h"
#include"Element.h"
#include"Deck.h"
using namespace std;

int main()
{
    cout<<"Create a Deck ;)"<<endl<<"Number of cards in your deck:";
    int numberCard;
    cin>>numberCard;
    Card** hand = new Card*[numberCard];
    int flag=0;
    int num=0;
    int hip=0;
    Monster myMonster[numberCard];
    Spell mySpell[numberCard];
    Trap myTrap[numberCard];
    for(int j=1;j<=numberCard;++j)
    {
        cout<<"card "<<j<<endl;
        cout<<"Type of card(Trap<0>;Monster<1>;Spell<2>)";
        int b;
        cin>>b;
        if(b==0)
        {
            cout<<"Trap name:";
            char str[100];
            cin>>str;
            TYPECARD G=TRAP;
            cout<<"How many points reduce this card:";
            int po;
            cin>>po;
            cout<<"Your trap reduce Attack(1) or Defense(2):";
            int kl;
            cin>>kl;
            Trap t(str,G,po,kl);
            Trap ts;
            ts=t;
            myTrap[hip]=ts;
            hip++;
        }
        else if(b==1)
        {
            cout<<"Creature type:WATER(0),FIRE(1),WIND(2),LAND(3)?";
            int c;
            cin>>c;
            ELEMENT a=static_cast<ELEMENT>(c);
            cout<<"Creature name:";
            char strl[100];
            cin>>strl;
            TYPECARD M=MONSTER;
            cout<<"Attack Points on your monster:";
            int Attack;
            cin>>Attack;
            cout<<"Defense Points on your monster:";
            int Defense;
            cin>>Defense;
            Monster m(strl,M,Attack,Defense,a);
            Monster ms;
            ms=m;
            myMonster[flag]=ms;
            flag++;
        }
        else if(b==2)
        {
            cout<<"Spell name:";
            char strG[100];
            cin>>strG;
            TYPECARD J=SPELL;
            cout<<"How many points boost this card:";
            int bo;
            cin>>bo;
            cout<<"Your spell boost Attack(1) or Defense(2):";
            int kn;
            cin>>kn;
            cout<<"Spell boost type:WATER(0),FIRE(1),WIND(2),LAND(3)?";
            int d;
            cin>>d;
            ELEMENT k=static_cast<ELEMENT>(d);
            Spell s(strG,J,k,bo,kn);
            Spell ss;
            ss=s;
            mySpell[num]=ss;
            num++;
        }
        else
            cout<<"Please, enter correct type card!";

    }
    int x,y,z;
    x=y=z=0;
    for(int c=0;c<flag;c++)
    {
        hand[c]=&myMonster[y];
        y++;
    }
    for(int c=flag;c<flag+num;c++)
    {
        hand[c]=&mySpell[x];
        x++;
    }
    for(int c=flag+num;c<flag+num+hip;c++)
    {
        hand[c]=&myTrap[z];
        z++;
    }
    Deck d1(hand,numberCard);
    Monster enemy;
    cout<<endl<<"Congratulation you made your deck ;)"<<endl;
    cout<<"You have opportunity between (1)add new card or (2)summon a enemy monster. Choose one:";
    for(int y=0;y<10;++y)
  {
    int chose;
    cin>>chose;
    if(chose==1)
    {
        cout<<"Type of card(Trap<0>;Monster<1>;Spell<2>)";
        int b;
        cin>>b;
        if(b==0)
        {
            cout<<"Trap name:";
            char str[100];
            cin>>str;
            TYPECARD G=TRAP;
            cout<<"How many points reduce this card:";
            int po;
            cin>>po;
            cout<<"Your trap reduce Attack(1) or Defense(2):";
            int kl;
            cin>>kl;
            Trap t(str,G,po,kl);
            Trap ts;
            ts=t;
            myTrap[hip]=ts;
            d1.AddCard(&myTrap[hip]);
            hip++;

        }
        else if(b==1)
        {
            cout<<"Creature type:WATER(0),FIRE(1),WIND(2),LAND(3)?";
            int c;
            cin>>c;
            ELEMENT a=static_cast<ELEMENT>(c);
            cout<<"Creature name:";
            char strl[100];
            cin>>strl;
            TYPECARD M=MONSTER;
            cout<<"Attack Points on your monster:";
            int Attack;
            cin>>Attack;
            cout<<"Defense Points on your monster:";
            int Defense;
            cin>>Defense;
            Monster m(strl,M,Attack,Defense,a);
            Monster ms;
            ms=m;
            myMonster[flag]=ms;
            d1.AddCard(&myMonster[flag]);
            flag++;
        }
        else if(b==2)
        {
            cout<<"Spell name:";
            char strG[100];
            cin>>strG;
            TYPECARD J=SPELL;
            cout<<"How many points boost this card:";
            int bo;
            cin>>bo;
            cout<<"Your spell boost Attack(1) or Defense(2):";
            int kn;
            cin>>kn;
            cout<<"Spell boost type:WATER(0),FIRE(1),WIND(2),LAND(3)?";
            int d;
            cin>>d;
            ELEMENT k=static_cast<ELEMENT>(d);
            Spell s(strG,J,k,bo,kn);
            Spell ss;
            ss=s;
            mySpell[num]=ss;
            d1.AddCard(&mySpell[num]);
            num++;
        }
        cout<<"GOOD! You have two options again.1)add new card or (2)summon a enemy monster. Choose one: "<<endl;
    }
    else if(chose==2)
    {
        cout<<"This is my final deck!"<<endl;
        d1.print();
        cout<<"Creature type:WATER(0),FIRE(1),WIND(2),LAND(3)?";
            int h;
            cin>>h;
            ELEMENT a=static_cast<ELEMENT>(h);
            cout<<"Enemy creature name:";
            char str[100];
            cin>>str;
            TYPECARD M=MONSTER;
            cout<<"Attack Points on enemy monster:";
            int Attack;
            cin>>Attack;
            cout<<"Defense Points on enemy monster:";
            int Defense;
            cin>>Defense;
            Monster enem(str,M,Attack,Defense,a);
            Monster mj;
            mj=enem;
            enemy=mj;
            break;
    }
  }
 bool candes=true;
  for(int m=0;m<flag;m++)
  {
      if(myMonster[m].getTypeMonster()==0)
      {
          Element e1(LAND,FIRE);
      if(enemy.getTypeMonster() == e1.getStrongerElement())
        myMonster[m].ReduceAttack(400);
      if(enemy.getTypeMonster() == e1.getWeakerElement())
        myMonster[m].BoostAttack(400);
      }
      else if(myMonster[m].getTypeMonster()==1)
       {
        Element e1(WATER,WIND);
        if(enemy.getTypeMonster() == e1.getStrongerElement())
        myMonster[m].ReduceAttack(400);
        if(enemy.getTypeMonster() == e1.getWeakerElement())
        myMonster[m].BoostAttack(400);
       }
      else if(myMonster[m].getTypeMonster()==2)
      {
      Element e1(FIRE,LAND);
      if(enemy.getTypeMonster() == e1.getStrongerElement())
        myMonster[m].ReduceAttack(400);
      if(enemy.getTypeMonster() == e1.weakerElement)
        myMonster[m].BoostAttack(400);
      }
      else if(myMonster[m].getTypeMonster()==3)
      {
      Element e1(WIND,WATER);
      if(enemy.getTypeMonster() == e1.getStrongerElement())
        myMonster[m].ReduceAttack(400);
      if(enemy.getTypeMonster() == e1.weakerElement)
        myMonster[m].BoostAttack(400);
      }
    if(myMonster[m].getAttack()>enemy.getDefense() && enemy.getAttack()<myMonster[m].getDefense())
    {
        cout<<"SORRY, I have a monster who destroy your monster!";
        cout<<myMonster[m].getName();
        candes=false;
        break;
    }
    int j=1;
    for(int h=0;h<hip;h++)
    {
        if(myTrap[h].getAtkOrDef()==1)
            enemy.ReduceAttack(myTrap[h].getReduce());
        if(myTrap[h].getAtkOrDef()==2)
                enemy.ReduceDefense(myTrap[h].getReduce());
        if(myMonster[m].getAttack()>enemy.getDefense() && myMonster[m].getDefense()>enemy.getAttack())
        {
            if(j==1)
                {cout<<myMonster[m].getName()<<"; ";
                j++;}
                 cout<<myTrap[h].getName()<<"; ";
                break;
        }

    }
    if(myMonster[m].getAttack()>enemy.getDefense() && myMonster[m].getDefense()>enemy.getAttack())
    {
        cout<<"SORRY,This is my combination with whom I destroy your monster!";
        candes=false;
        break;
    }
    for(int g=0;g<num;g++)
      {
       if(mySpell[g].getAtkOrDef()==1)
        {
            if(myMonster[m].getTypeMonster()==mySpell[g].getElement())
           {
            myMonster[m].BoostAttack(mySpell[g].getBoost());
           }
        }
        if(mySpell[g].getAtkOrDef()==2)
        {
            if(myMonster[m].getTypeMonster()==mySpell[g].getElement())
           {
            myMonster[m].BoostDefense(mySpell[g].getBoost());
           }
        }
      if(myMonster[m].getAttack()>enemy.getDefense() && myMonster[m].getDefense()>enemy.getAttack())
            {
             if(j==1)
                {cout<<myMonster[m].getName()<<"; ";
                j++;}
                cout<<mySpell[g].getName()<<"; ";
                break;
            }
    }
    if(myMonster[m].getAttack()>enemy.getDefense() && myMonster[m].getDefense()>enemy.getAttack())
    {
        cout<<"SORRY,This is my combination with whom I destroy your monster!";
        candes=false;
        break;
    }
  }
   if(candes)
   {
       cout<<"I can not destroy your minion.You win! ;(";
   }

    return 0;
}
