#include "menu.h"
#include <stdlib.h>


MenuNode CurrentMenu;

MenuNode* newMenu(int cnt, MenuNode *parent) {
    MenuNode *menu = (MenuNode*)malloc(sizeof(MenuNode) * cnt);
    if (parent != NULL) {
        parent->sub = menu;
    }
    for (int i = 0; i < cnt; i++) {
        menu[i].parent = parent;
        if (i > 0) {
            menu[i].prev = &(menu[i-1]);
        }
        if (i < cnt - 1) {
            menu[i].next = &(menu[i+1]);
        }
    }
    return menu;
}

void Menu_Init(void) {
    MenuNode *rootMenu = newMenu(6, NULL);
    rootMenu[0].id = 1;
    rootMenu[0].type = 0;
    rootMenu[0].display = "模式设置";
    rootMenu[1].id = 2;
    rootMenu[1].type = 0;
    rootMenu[1].display = "字符设置";
    rootMenu[2].id = 3;
    rootMenu[2].type = 0;
    rootMenu[2].display = "速度设置";
    rootMenu[3].id = 4;
    rootMenu[3].type = 0;
    rootMenu[3].display = "声音设置";
    rootMenu[4].id = 5;
    rootMenu[4].type = 0;
    rootMenu[4].display = "按键设置";
    rootMenu[5].id = 6;
    rootMenu[5].type = 0;
    rootMenu[5].display = "关机设置";
    
    MenuNode *modeMenu = newMenu(3, &(rootMenu[0]));
    modeMenu[0].id = 7;
    modeMenu[0].type = 0;
    modeMenu[0].display = "练习模式";
    modeMenu[1].id = 8;
    modeMenu[1].type = 0;
    modeMenu[1].display = "默写模式";
    modeMenu[2].id = 9;
    modeMenu[2].type = 0;
    modeMenu[2].display = "听译模式";
    
    MenuNode *charMenu = newMenu(3, &(rootMenu[1]));
    charMenu[0].id = 10;
    charMenu[0].type = 2;
    charMenu[0].display = "字母";
    charMenu[1].id = 11;
    charMenu[1].type = 2;
    charMenu[1].display = "数字";
    charMenu[2].id = 12;
    charMenu[2].type = 2;
    charMenu[2].display = "符号";
    
    MenuNode *speedMenu = newMenu(4, &(rootMenu[2]));
    charMenu[0].id = 13;
    charMenu[0].type = 1;
    charMenu[0].display = "1";
    charMenu[1].id = 14;
    charMenu[1].type = 1;
    charMenu[1].display = "2";
    charMenu[2].id = 15;
    charMenu[2].type = 1;
    charMenu[2].display = "3";
    charMenu[3].id = 16;
    charMenu[3].type = 1;
    charMenu[3].display = "4";
    
    MenuNode *soundMenu = newMenu(2, &(rootMenu[3]));
    soundMenu[0].id = 17;
    soundMenu[0].type = 0;
    soundMenu[0].display = "音量";
    soundMenu[1].id = 18;
    soundMenu[1].type = 0;
    soundMenu[1].display = "音色";
    
    MenuNode *keyMenu = newMenu(4, &(rootMenu[4]));
    keyMenu[0].id = 19;
    keyMenu[0].type = 1;
    keyMenu[0].display = "左手双桨";
    keyMenu[1].id = 20;
    keyMenu[1].type = 1;
    keyMenu[1].display = "右手双桨";
    keyMenu[2].id = 21;
    keyMenu[2].type = 1;
    keyMenu[2].display = "左手单桨";
    keyMenu[3].id = 22;
    keyMenu[3].type = 1;
    keyMenu[3].display = "右手单桨";
    
    MenuNode *powerMenu = newMenu(6, &(rootMenu[5]));
    powerMenu[0].id = 23;
    powerMenu[0].type = 1;
    powerMenu[0].display = "无";
    powerMenu[1].id = 24;
    powerMenu[1].type = 1;
    powerMenu[1].display = "1分钟";
    powerMenu[2].id = 25;
    powerMenu[2].type = 1;
    powerMenu[2].display = "3分钟";
    powerMenu[3].id = 26;
    powerMenu[3].type = 1;
    powerMenu[3].display = "5分钟";
    powerMenu[4].id = 27;
    powerMenu[4].type = 1;
    powerMenu[4].display = "10分钟";
    powerMenu[5].id = 28;
    powerMenu[5].type = 1;
    powerMenu[5].display = "30分钟";
    
    MenuNode *randMenu = newMenu(1, &(modeMenu[0]));
    randMenu[0].id = 29;
    randMenu[0].type = 0;
    randMenu[0].display = "随机";
    
    MenuNode *blindMenu = newMenu(3, &(modeMenu[1]));
    blindMenu[0].id = 30;
    blindMenu[0].type = 1;
    blindMenu[0].display = "初级";
    blindMenu[1].id = 31;
    blindMenu[1].type = 1;
    blindMenu[1].display = "高级";
    blindMenu[2].id = 32;
    blindMenu[2].type = 0;
    blindMenu[2].display = "提示";
    
    MenuNode *listenMenu = newMenu(3, &(modeMenu[2]));
    listenMenu[0].id = 33;
    listenMenu[0].type = 1;
    listenMenu[0].display = "初级";
    listenMenu[1].id = 34;
    listenMenu[1].type = 1;
    listenMenu[1].display = "高级";
    listenMenu[2].id = 35;
    listenMenu[2].type = 0;
    listenMenu[2].display = "重复";
    
    MenuNode *volumeMenu = newMenu(10, &(soundMenu[0]));
    volumeMenu[0].id = 36;
    volumeMenu[0].type = 1;
    volumeMenu[0].display = "静音";
    volumeMenu[1].id = 37;
    volumeMenu[1].type = 1;
    volumeMenu[1].display = "音量1";
    volumeMenu[2].id = 38;
    volumeMenu[2].type = 1;
    volumeMenu[2].display = "音量2";
    volumeMenu[3].id = 39;
    volumeMenu[3].type = 1;
    volumeMenu[3].display = "音量3";
    volumeMenu[4].id = 40;
    volumeMenu[4].type = 1;
    volumeMenu[4].display = "音量4";
    volumeMenu[5].id = 41;
    volumeMenu[5].type = 1;
    volumeMenu[5].display = "音量5";
    volumeMenu[6].id = 42;
    volumeMenu[6].type = 1;
    volumeMenu[6].display = "音量6";
    volumeMenu[7].id = 43;
    volumeMenu[7].type = 1;
    volumeMenu[7].display = "音量7";
    volumeMenu[8].id = 44;
    volumeMenu[8].type = 1;
    volumeMenu[8].display = "音量8";
    volumeMenu[9].id = 45;
    volumeMenu[9].type = 1;
    volumeMenu[9].display = "音量9";
    
    MenuNode *timbreMenu = newMenu(3, &(soundMenu[1]));
    timbreMenu[0].id = 46;
    timbreMenu[0].type = 1;
    timbreMenu[0].display = "音色1";
    timbreMenu[1].id = 47;
    timbreMenu[1].type = 1;
    timbreMenu[1].display = "音色2";
    timbreMenu[2].id = 48;
    timbreMenu[2].type = 1;
    timbreMenu[2].display = "音色3";
    
    MenuNode *randomMenu = newMenu(2, &(randMenu[0]));
    randomMenu[0].id = 49;
    randomMenu[0].type = 1;
    randomMenu[0].display = "开启";
    randomMenu[1].id = 50;
    randomMenu[1].type = 1;
    randomMenu[1].display = "关闭";
    
    MenuNode *promptMenu = newMenu(2, &(blindMenu[2]));
    promptMenu[0].id = 51;
    promptMenu[0].type = 1;
    promptMenu[0].display = "开启";
    promptMenu[1].id = 52;
    promptMenu[1].type = 1;
    promptMenu[1].display = "关闭";
    
    MenuNode *repeatMenu = newMenu(2, &(listenMenu[2]));
    repeatMenu[0].id = 53;
    repeatMenu[0].type = 1;
    repeatMenu[0].display = "开启";
    repeatMenu[1].id = 54;
    repeatMenu[1].type = 1;
    repeatMenu[1].display = "关闭";
    
    CurrentMenu = *rootMenu;
}


