#ifndef PLAYERCLASS_H
#define PLAYERCLASS_H
#include <string>
#include <iostream>
using namespace std;


class playerClass
{
    public:
        playerClass();
        virtual ~playerClass();
        void setName (string n);
        void setIcon (char i);
        string getName ();
        char getIcon ();
        void setMove(int m);
        int getMove();

    protected:
    private:
        string name;
        char icon;
        int move;

};

#endif // PLAYERCLASS_H
