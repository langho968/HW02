#include <iostream>
#include "Player.h"
#include "Warrior.h"
#include "Magician.h"
#include "Thief.h"
#include "Archer.h"
#include "Monster.h"
using namespace std;

// 메인 함수
int main() {
    string jobs[] = { "전사", "마법사", "도적", "궁수" };
    int jobChoice = 0;
    int actChoice = 0;
    string nickName;

    Player* player = nullptr;
    Monster* monster = new Monster();
    cout << "* 닉네임을 입력해주세요: ";
    cin >> nickName;

    cout << "<전직 시스템>" << endl;
    cout << nickName << "님, 환영합니다!" << endl;
    cout << "* 원하시는 직업을 선택해주세요." << endl;

    for (int i = 0; i < 4; i++) {
        cout << (i + 1) << ". " << jobs[i] << endl;
    }

    cout << "선택: ";
    cin >> jobChoice;

    switch (jobChoice) {
    case 1: 
        player = new Warrior(nickName);
        break;
    case 2: 
        player = new Magician(nickName);
        break;
    case 3: 
        player = new Thief(nickName);
        break;
    case 4: 
        player = new Archer(nickName); 
        break;
    default:
        cout << "잘못된 입력입니다." << endl;
        break;
    }
		
    while (player->getHP() >= 0)
    {
        player->printPlayerStatus();
        cout << "고블린 체력 : " << monster->getmonsterHP() << endl;
        cout << "공격 : 1 " << "종료 : 2" << endl << endl; 
        cin >> actChoice;
        if (actChoice == 1)
        {
            player->attack(monster);
        }
        else if (actChoice == 2)
        {
            break;
        }
        
        monster->attackPlayer(player);
        
        
        
        //몬스터 사망
        if (monster->getmonsterHP()<=0)
        {
            break;
        }
    }
    //player->attack();
    //player->printPlayerStatus();

    
    if (monster != nullptr)
    {
        delete monster;
        monster = nullptr;
    }
    
    if(player != nullptr)
    {
        delete player;
        player = nullptr;
    }
        

    return 0;
}