#include "Warrior.h"
#include <iostream>

Warrior::Warrior(string nickName) : Player(nickName)
{
    this->jobName = "전사";
    this->HP = 200;
    this->MP = 50;
    this->power = 20;
    this->defence = 20;
    this->accuracy = 80;
    this->speed = 10;
}

void Warrior::attack() 
{
    cout << "검을 휘두릅니다!" << endl;
}

void Warrior::attack(Monster* monster)
{
    int damage;
    if (getPower()-monster->getmonsterDefence()<=0)
    {
        damage = 1;
    }
    else
    {
        damage = getPower()-monster->getmonsterDefence();
    }
    
    cout << "검을 휘둘러 " << damage << "만큼의 데미지를 주었습니다." << endl;
    monster->setMonsterHP(monster->getmonsterHP() - damage);
    if (monster->getmonsterHP() <=0)
    {
        cout << "몬스터가 사망하였습니다!" << endl;
    }
    else
    {
        cout << "몬스터 남은 HP : " << monster->getmonsterHP() << endl;
    }

}
