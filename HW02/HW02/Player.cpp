#include "Player.h"
#include <iostream>

Player::Player(string nickName)
{
    this->nickName = nickName;
    this->level = 1;
    this->HP = 0;
    this->MP = 0;
    this->power = 0;
    this->defence = 0;
    this->accuracy = 0;
    this->speed = 0;    
}


void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* 현재 능력치" << endl;
    cout << "닉네임: " << nickName << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "정확도: " << accuracy << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}

//getter
int Player::getLevel() { return level; }
int Player::getHP() { return HP; }
int Player::getMP() { return MP; }
int Player::getPower() { return power; }
int Player::getDefence() { return defence; }
int Player::getAccuracy() { return accuracy; }
int Player::getSpeed() { return speed; }

//setter
void Player::setNickName(string nickName)
{
    this->nickName = nickName;
}
void Player::setHP(int HP)
{
    this->HP = HP;
}
void Player::setMP(int MP)
{
    this->MP = MP;
}
void Player::setPower(int power)
{
    this->power = power;
}
void Player::setDefence(int defence)
{
    this->defence = defence;
}
void Player::setAccuracy(int accuracy)
{
    this->accuracy = accuracy;
}
void Player::setSpeed(int speed)
{
    this->speed = speed;
}