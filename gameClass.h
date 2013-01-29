#include "boardClass.h"
#include "playerClass.h"
#ifndef GAMECLASS_H
#define GAMECLASS_H


class gameClass
{
    public:
        gameClass();
        virtual ~gameClass();

        void initialize();
        void update();
        void render ();
        bool checkWin();
        void switchPlayer();
        void run();
        bool gameDraw();

    protected:
    private:
    playerClass m_p1;
    playerClass m_p2;
    playerClass *m_currentPlayer;
    bool m_isComplete;
    boardClass m_board;
};

#endif // GAMECLASS_H
