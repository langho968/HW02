#include "Player.h"
#include <iostream>
/*
Player::Player(string nickName)
    : nickName(nickName)
    , level(1)
    , HP(0)
    , MP(0)
    , power(0)
    , defence(0)
    , accuracy(0)
    , speed(0)
{}
*/
Player::Player(string nickName, int HP, int MP, int power, int defence, int accuracy, int speed)
    : nickName(nickName), level(1), HP(HP), MP(MP), power(power), defence(defence), accuracy(accuracy), speed(speed)
{}

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