#include "Magician.h"
#include <iostream>

Magician::Magician(string nickName) : Player(nickName)
{
    this->jobName = "마법사";
    this->HP = 100;
    this->MP = 100;
    this->power = 5;
    this->defence = 5;
    this->accuracy = 80;
    this->speed = 5;
}

void Magician::attack()
{
    cout << "마법을 사용합니다!" << endl;
}

void Magician::attack(Monster* monster)
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
    
    cout << "마법이 발사되어 " << damage << "만큼의 데미지를 주었습니다." << endl;
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