#pragma once
#include <string>
using namespace std;

class Player;

class Monster
{
public:
    Monster(string monsterName ="Goblin");
    
    void attackPlayer(Player* player);
    
    //getter
    string getmonsterName();
    int getmonsterHP();
    int getmonsterPower();
    int getmonsterDefence();
    int getmonsterSpeed();
    
    
    //setter
    void setMonsterName(string monsterName);
    void setMonsterHP(int monsterHP);
    void setMonsterPower(int monsterPower);
    void setMonsterDefence(int monsterDefence);
    void setMonsterSpeed(int monsterSpeed);
protected:
    string monsterName;
    int monsterHP;
    int monsterPower;
    int monsterDefence;
    int monsterSpeed;
    
};
