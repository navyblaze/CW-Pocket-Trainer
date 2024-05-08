#ifndef __MENU_H
#define __MENU_H

#include "debug.h"


typedef struct MenuNode {
    u8 id; // 菜单id
    u8 type; // 菜单类型: 0. 父节点; 1. 单选; 2. 多选
    char* display; // 菜单名称
    struct MenuNode *prev; // 上一个菜单
    struct MenuNode *next; // 下一个菜单
    struct MenuNode *sub; // 子菜单
    struct MenuNode *parent; // 父菜单
} MenuNode;

extern void Menu_Init(void);
extern MenuNode CurrentMenu;

#endif // __MENU_H
