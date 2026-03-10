#include "Thief.h"
#include <iostream>

Thief::Thief(string nickName) : Player(nickName)
{
    this->jobName = "도적";
    this->HP = 150;
    this->MP = 50;
    this->power = 15;
    this->defence = 5;
    this->accuracy = 80;
    this->speed = 30;
}

void Thief::attack()
{
    cout << "단검을 던집니다!" << endl;
}

void Thief::attack(Monster* monster)
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
    
    cout << "단검으로 총 5회 공격을 성공하여 각각 " << damage/5 << "만큼의 데미지를 주었습니다." << endl;
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