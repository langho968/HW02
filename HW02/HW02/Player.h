#pragma once
#include <string>
#include "Monster.h"
using namespace std;

class Player
{
public:
    Player(string nickName);

    
    virtual void attack() = 0;
    virtual void attack(Monster* monster) = 0;
    void printPlayerStatus();
    
    //getter
    string getJobName();
    string getNickName();
    int getLevel();
    int getHP();
    int getMP();
    int getPower();
    int getDefence();
    int getAccuracy();
    int getSpeed();
    
    //setter
    void setNickName(string nickName);
    void setHP(int HP);
    void setMP(int MP);
    void setPower(int power);
    void setDefence(int defence);
    void setAccuracy(int accuracy);
    void setSpeed(int speed);
    
protected:
    string jobName;
    string nickName;
    int level;
    int HP;
    int MP;
    int power;
    int defence;
    int accuracy;
    int speed;    
};
