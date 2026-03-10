#include "Monster.h"
#include "Player.h"
#include <iostream>


Monster::Monster(string monsterName)
{
    this->monsterName = monsterName;
    this->monsterHP = 30;
    this->monsterPower = 20;
    this->monsterDefence = 10;
    this->monsterSpeed = 10;    
}

void Monster::attackPlayer(Player* player)
{
    int damage;
    if (monsterPower-player->getDefence() <=0)
    {
        damage = 1;
    }
    else
    {
        damage = monsterPower-player->getDefence();
    }
    cout << damage << "만큼의 데미지를 받았습니다." << endl;
    player->setHP(player->getHP() - damage);
    if (player->getHP() <= 0)
    {
        cout << "플레이어가 사망하였습니다." << endl;
    }
    else
    {
        cout << "생존했습니다. 남은 HP : " << player->getHP() << endl;
    }
    
}

//getter
string Monster::getmonsterName(){return monsterName;}
int Monster::getmonsterHP(){return monsterHP;}
int Monster::getmonsterPower(){return monsterPower;}
int Monster::getmonsterDefence(){return monsterDefence;}
int Monster::getmonsterSpeed(){return monsterSpeed;}

//setter
void Monster::setMonsterName(string monsterName)
{
    this->monsterName = monsterName;
}
void Monster::setMonsterHP(int monsterHP)
{
    this->monsterHP = monsterHP;
}
void Monster::setMonsterPower(int monsterPower)
{
    this->monsterPower = monsterPower;
}
void Monster::setMonsterDefence(int monsterDefence)
{
    this->monsterDefence = monsterDefence;
}
void Monster::setMonsterSpeed(int monsterSpeed)
{
    this->monsterSpeed = monsterSpeed;
}
