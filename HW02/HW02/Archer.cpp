#include "Archer.h"
#include <iostream>

Archer::Archer(string nickName) : Player(nickName, 180, 50, 20, 10, 100, 20)
{
    this->jobName = "궁수";
}

void Archer::attack()
{
    cout << "화살을 발사합니다!" << endl;
}

void Archer::attack(Monster* monster)
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
    
    cout << "화살 2발을 발사하여 각각 " << damage/2 << "만큼의 데미지를 주었습니다." << endl;
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