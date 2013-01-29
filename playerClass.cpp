#include "playerClass.h"

playerClass::playerClass()
{
    //ctor
}

playerClass::~playerClass()
{
    //dtor
}

void playerClass::setName (string n){
    name = n;
}
void playerClass::setIcon (char i){
    icon = i;
}
void playerClass::setMove(int m){
    move = m;
}
string playerClass::getName (){
    return name;
}
char playerClass::getIcon (){
    return icon;
}
int playerClass::getMove(){
    return move;
}
