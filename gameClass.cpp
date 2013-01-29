#include "gameClass.h"

gameClass::gameClass()
{
    //ctor
}

gameClass::~gameClass()
{
    //dtor
}


void gameClass::initialize (){

    m_board.initialize();
    m_p1.setName("Gandalf");
    m_p1.setIcon('X');
    m_p2.setName("Balrog");
    m_p2.setIcon('O');
    m_currentPlayer = &m_p1;

}
void gameClass::update (){

    m_board.update(m_currentPlayer->getMove(), m_currentPlayer->getIcon());
    m_isComplete = checkWin();
    if (m_isComplete==1){
        m_board.render();
        cout << "=================================================" << endl;
        cout << "\t\tThe winner is " << m_currentPlayer->getName() << endl;
        cout << "=================================================" << endl;
        }

    if (gameDraw()==1 && m_isComplete==0){
        m_board.render();
        cout << "=================================================" << endl;
        cout <<"\t\t          Game Draw" <<endl;
        cout << "=================================================" << endl;
        }
    switchPlayer();

}
void gameClass::render (){
    m_board.render();
    cout << "Player " << m_currentPlayer->getName() << "'s move: ";
    }

bool gameClass::checkWin (){
    m_board.checkWin();
}


void gameClass::switchPlayer(){

    if (m_currentPlayer == &m_p1)
        m_currentPlayer = &m_p2;
    else if (m_currentPlayer == &m_p2)
        m_currentPlayer = &m_p1;
}

void gameClass::run(){

    while(m_isComplete==0 && gameDraw()==0){
    render();
    update();
    }
}

bool gameClass::gameDraw(){
    m_board.gameDraw();
}
