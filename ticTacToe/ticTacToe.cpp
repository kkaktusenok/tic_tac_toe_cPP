#include <iostream>
#include <random>
#include <stdlib.h>


using namespace std;
int getFieldNumber;
char board[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
bool p1 = true;
bool p2 = true;
//creating game field 3x3 numbered from 1 to 9
void generate_field() {
    cout << board[0][0] << "    |  " << board[0][1] << "   | "<<board[0][2] << endl;
    cout << "_____|______|_____" << endl;
    cout << "     |      |     " << endl;
    cout << board[1][0] << "    |  " << board[1][1] << "   | " << board[1][2] << endl;
    cout << "_____|______|_____" << endl;
    cout << "     |      |     " << endl;
    cout << board[2][0] << "    |  " << board[2][1] << "   | " << board[2][2] << endl;
}


void winMessageX() {
    cout << "congratulations X Win" << endl;
    exit(EXIT_SUCCESS);
}
void winMessageO() {
    cout << "congratulations O Win" << endl;
    exit(EXIT_SUCCESS);

}
void checkWhoWinX() {
    if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
    {
        winMessageX();
    }
    if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
    {
        winMessageX();
    }
    if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
    {
        winMessageX();
    }

    if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
    {
        winMessageX();
    }
    if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
    {
        winMessageX();
    }
    if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
    {
        winMessageX();
    }

    if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
    {
        winMessageX();
    }
    if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')
    {
        winMessageX();
    }
    else
    {
        p1 = false;
    }

}
void checkWhoWinO() {
    if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
    {
        winMessageX();
    }
    if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
    {
        winMessageX();
    }
    if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
    {
        winMessageX();
    }

    if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
    {
        winMessageX();
    }
    if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
    {
        winMessageX();
    }
    if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
    {
        winMessageX();
    }
    if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
    {
        winMessageX();
    }
    if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')
    {
        winMessageX();
    }
    else
    {
        p2 = false;
    }

}
void crosses() {
    cin >> getFieldNumber;
    switch (getFieldNumber)
    {
    case 1:
        board[0][0] = 'X';
        system("cls");
        generate_field();
        break;
    case 2:
        board[0][1] = 'X';
        system("cls");
        generate_field();
        break;
    case 3:
        board[0][2] = 'X';
        system("cls");
        generate_field();
        break;
    case 4:
        board[1][0] = 'X';
        system("cls");
        generate_field();
        break;
    case 5:
        board[1][1] = 'X';
        system("cls");
        generate_field();
        break;
    case 6:
        board[1][2] = 'X';
        system("cls");
        generate_field();
        break;
    case 7:
        board[2][0] = 'X';
        system("cls");
        generate_field();
        break;
    case 8:
        board[2][1] = 'X';
        system("cls");
        generate_field();
        break;
    case 9:
        board[2][2] = 'X';
        system("cls");
        generate_field();
        break;
    default:
        cout << "please enter number from 1 - 9" << endl;
        crosses();
    }
}
void zeroes() {
    cin >> getFieldNumber;
    switch (getFieldNumber)
    {
    case 1:
        board[0][0] = 'O';
        system("cls");
        generate_field();
        break;
    case 2:
        board[0][1] = 'O';
        system("cls");
        generate_field();
        break;
    case 3:
        board[0][2] = 'O';
        system("cls");
        generate_field();
        break;
    case 4:
        board[1][0] = 'O';
        system("cls");
        generate_field();
        break;
    case 5:
        board[1][1] = 'O';
        system("cls");
        generate_field();
        break;
    case 6:
        board[1][2] = 'O';
        system("cls");
        generate_field();
        break;
    case 7:
        board[2][0] = 'O';
        system("cls");
        generate_field();
        break;
    case 8:
        board[2][1] = 'O';
        system("cls");
        generate_field();
        break;
    case 9:
        board[2][2] = 'O';
        system("cls");
        generate_field();
        break;
    default:
        cout << "please enter number from 1 - 9" << endl;
        zeroes();
    }
}
//check who goes first
void stebByStep() {
    for (int i = 1; i < 10; i++)
    {
        if (i % 2 != 0) {
            crosses();
            checkWhoWinX();
        }
        if (i % 2 == 0) {
            zeroes();
            checkWhoWinO();
        }
    }
}

void newboard() {
    board[0][0] = '1';
    board[0][1] = '2';
    board[0][2] = '3';
    board[1][0] = '4';
    board[1][1] = '5';
    board[1][2] = '6';
    board[2][0] = '7';
    board[2][1] = '8';
    board[2][2] = '9';
}
void start_game_again() {
    cout << "Do you want to start game again" << endl;
    cout << "if You want enter 1 if not enter any key" << endl;
    int chose;
    cin >> chose;
    if (chose == 1) {
        system("cls");
        newboard();
        generate_field();
        stebByStep();
    }
    else
    {
        exit(EXIT_SUCCESS);
    }
}
void draw() {

    if (p1 == false && p2 == false) {
        system("cls");
        cout << "draw play again" << endl;
        newboard();
        generate_field();
        stebByStep();
    }

}

int main()
{
    generate_field();
    stebByStep();
    draw();
    start_game_again();
}
