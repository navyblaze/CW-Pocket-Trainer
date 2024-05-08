#ifndef __MENU_H
#define __MENU_H

#include "debug.h"


typedef struct MenuNode {
    u8 id; // �˵�id
    u8 type; // �˵�����: 0. ���ڵ�; 1. ��ѡ; 2. ��ѡ
    char* display; // �˵�����
    struct MenuNode *prev; // ��һ���˵�
    struct MenuNode *next; // ��һ���˵�
    struct MenuNode *sub; // �Ӳ˵�
    struct MenuNode *parent; // ���˵�
} MenuNode;

extern void Menu_Init(void);
extern MenuNode CurrentMenu;

#endif // __MENU_H
