#include <iostream>
#include "class.hpp"
using namespace std;
Money::Money(int money)
{
    this->money=0;//default
    setmoney(money);
}
void Money::operator+(int i)
{
    setmoney(i);
}
void Money::setmoney(int value)
{//validating
    if(value + money < 0)//meghdar sekkeh nabaiad manfi bashad 
    {
        cout<<"wrong value"<<endl;
        return;
    } 
    else
    {
        this->money += value;
    }
}
int Money::getmoney()//dastresi be sekkeha
{
    return this->money;
}
int Money::getmoney(int count , int price)//return kardan meghdar khasi az sekkeh
{
    if((count*price)>money)//count*price hazineh baraye kharide chiz ha
    {
        cout<<"you have not enough money"<<endl;
        exit;//exception
    }
    if((count*price)<0)//hazineh nabaiad manfi bashad(validating)
    {
        cout<<"wrong values"<<endl;
        exit;//exception
    }

    this->money -=(count*price);//kam kardane yek hazineh moshakhas az sekeha
    return count*price;
}
int feed::getFeed(int count,int fed)//feed ghazaie heivanat ast
{
    
    if((count < 0 && count *fed < 0)||count*fed> feeds)//baiad ghaza kafi bashad va manfi nabashad
    {
        cout<<"wrong value"<<endl;
        exit;//exception
    } 
    else
    {
        this->feeds -= fed*count;
    }   
    return fed*count;
}

int feed::getFeed()//dastresi be oloofeh
{
    return feeds;
}
void feed::setFeed(int money)//money = meghdare oloofeh * gheymate oloofeh(2)
{
    feeds+=money/2;
}
feed::feed(int i)
{
    feeds = 0;//default
    setFeed(i);
}
void Money::operator-(int i)
{
    setmoney(i);
}
bool feed::operator+(int i)
{
    setFeed(i);
    return true;
}
void Hen::operator-(int i)
{
    if( HenCount - i>=0)
    {
        HenCount = HenCount - i;
    }
}
void Hen::operator+(int i)
{
    setHen(i*4);
}
void Sheep::operator-(int i)
{
    if( SheepCount - i>=0)
    {
        SheepCount = SheepCount - i;
    }
}
void Sheep::operator+(int i)
{
    setSheep(i*10);
}
void Cow::operator-(int i)
{
    if( CowCount - i>=0)
    {
        CowCount = CowCount - i;
    }
}
void Cow::operator+(int i)
{
    setcow(i*20);
}
Hen::Hen(int count , int price):animal(1 , price)
{
   HenCount+=count;   
}
void Hen::setHen(int i)//afzaiesh tedade morgh ha
{
    HenCount+=i/4;
}
int Hen::getEgg()
{
    return this->egg;
}
int Hen::getHen()
{
    return this->HenCount;
}
void Hen::setEgg(int i )//i haman olufeh ast
{
    this->egg+=i/2;
}
Sheep::Sheep(int count, int price):animal(3,price)//count tedad gusfand ha va price gheimate gusfand ha
{
    SheepCount+=count;
}
void Sheep::setSheep(int price)//kharide gusfand
{
    SheepCount+=price/10;
}
int Sheep::getSheep()
{
    return this->SheepCount;//tedade gusfand ha
}
void Sheep::setsheepMilk(int feds)//shire gusfand
{
    sheepMilk += feds/3;
}
int Sheep::getsheepMilk()
{
    return this->sheepMilk;
}
void Cow::setcheese(int value)//tolide panir
{
     if(value<0)//meghdar manfi ghabele ghabul nist
    {
        cout<<"wrong validate"<<endl;
        exit;//exception
    }
    if(value*3>cowMilk)//if shir be andazeh kafi mojud bashad
    {
        cout<<"you have not enugh milk"<<endl;
        exit;//exception
    }
    cowMilk -= value*3;
    cheese+= value;
}
int Cow::getcheese()
{
    return this->cheese;
}
int Cow::getyogurt()
{
    return this->yogurt;
}
void Cow::setyogurt(int value)//tolide mast
{
    if(value<0)
    {
        cout<<"wrong validate"<<endl;
        exit;//exception
    }
    if(value*3>cowMilk)//if shir be andazeh kafi mojud bashad
    {
        cout<<"you have not enugh milk"<<endl;
        exit;//exception
    }
    cowMilk -= value*3;
    yogurt+= value;
}
int Cow::getcowMilk()
{
    return this->cowMilk;
}
void Cow::setcowMilk(int feds)//tolide shir
{
    cowMilk+=feds/5;
}
Cow::Cow(int count,int price):animal(5 , price)//kharide gav
{
    CowCount+=count;
}
void Cow::setcow(int price)//afzayesh tedade gav ha
{
    CowCount+=price/20;
}
int Cow::getcow()
{
    return this->CowCount;
}
animal::animal(int c ,int p)
{
    set_price(p);
    set_eat(c);
}
void animal::set_price(int p)
{
    price = p;
}
int animal::get_price()
{
    return price;
}
void animal::set_eat(int i)
{
    eat = i;
}
int animal::get_eat()
{
    return eat;
}
void animal::operator+(int)
{
        
}
