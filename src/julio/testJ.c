//
// Created by admin on 24/11/2021.
//
//INCLUDE--------------------------------------------------------------------//
#include "main.h"
#include "entity.h"
#include "mob.h"
#include "actions.h"
#include "player.h"
//INITIALISATION-------------------------------------------------------------//
void initialisation(){
    Entity *e,*e2;
//    initSlime(&e);
//    initLizard(&e2);
    initWarrior(&e);
    affIt(e);
//    affIt(e2);
//    while ((e->pv>0)&&(e2->pv)>0){
//        EntAttack(e,&e2);
//        EntAttack(e2,&e);
//    }
//    affIt(e);
//    affIt(e2);
}
//---------------------------------------------------------------------------//
int main() {
    printf("Hello, World!\n");
    initialisation();
    return 0;
}
