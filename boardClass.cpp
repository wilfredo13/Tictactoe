#include "boardClass.h"
#include "gameClass.h"
#include <iostream>
#include <cstdlib>
using namespace std;

boardClass::boardClass()
{
    //ctor
}

boardClass::~boardClass()
{
    //dtor
}


void boardClass::initialize(){
for (int i=0; i<9; i++){
    box[i] = '1' + i;
    }
}

void boardClass::render(){

    cout << endl;
    cout << "================================================="<< endl;
    cout << "                   Tic Tac Toe" << endl;
    cout << "================================================="<< endl;
    cout << "\t\t       |       |" << endl;
    cout << "\t\t   " << box[0] << "   |   " << box[1] << "   |   " << box[2] << endl;
    cout << "\t\t_______|_______|_______" << endl;
    cout << "\t\t       |       |" << endl;
    cout << "\t\t   " << box[3] << "   |   " << box[4] << "   |   " << box[5] << endl;
    cout << "\t\t_______|_______|_______" << endl;
    cout << "\t\t       |       |" << endl;
    cout << "\t\t   " << box[6] << "   |   " << box[7] << "   |   " << box[8] << endl;
    cout << "\t\t       |       |" << endl << endl;
}

void boardClass::update(int move, char icon){

invalid:
    cout << "Enter move: ";
    cin >> move;
    system("cls");
    if (move == 1 && box[0] == '1') box[0] = icon;
        else if (move == 2 && box[1] == '2') box[1] = icon;
        else if (move == 3 && box[2] == '3') box[2] = icon;
        else if (move == 4 && box[3] == '4') box[3] = icon;
        else if (move == 5 && box[4] == '5') box[4] = icon;
        else if (move == 6 && box[5] == '6') box[5] = icon;
        else if (move == 7 && box[6] == '7') box[6] = icon;
        else if (move == 8 && box[7] == '8') box[7] = icon;
        else if (move == 9 && box[8] == '9') box[8] = icon;
        else {
            render();
            cout << "Invalid Move\n";
            goto invalid;
        }
}

bool boardClass::checkWin(){
    // horizontal
    if (box[0] == box[1] && box[1] == box[2]) return 1;
	else if (box[3] == box[4] && box[4] == box[5]) return 1;
	else if (box[6] == box[7] && box[7] == box[8]) return 1;
	// vertical
	else if (box[0] == box[3] && box[3] == box[6]) return 1;
	else if (box[1] == box[4] && box[4] == box[7]) return 1;
	else if (box[2] == box[5] && box[5] == box[8]) return 1;
	// diagonal
	else if (box[0] == box[4] && box[4] == box[8]) return 1;
	else if (box[2] == box[4] && box[4] == box[6]) return 1;
	// draw
		// on-going
	else return false;
}

bool boardClass::gameDraw()
{
    if (box[0]!= '1'&& box[1]!= '2'&& box[2]!= '3'&& box[3]!= '4'
        && box[4]!= '5'&& box[5]!= '6'&& box[6]!= '7'&& box[7]!= '8'&& box[9]!= '9')
        return 1;
    else
        return 0;
}
