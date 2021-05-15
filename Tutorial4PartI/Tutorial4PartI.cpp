/** \file Tutorial4PartI.cpp
* \brief Drawing program
* \details Program that allows the user to draw
* \author Phoebe Zizirou
* \version 0.1
* \date 15/05/2021
* \copyright UNIC
*/

//Language Libs
#include<iostream>
#include <cassert> 
#include<cstdlib>
#include<ctime>

//User Libs
#include "Shapes.h"

using namespace std;

//Horizontal Line Function Prototype

void drawHorizontalLine(const int length, const char ch);

//Vertical Line Funtion Prototype

void drawVerticalLine(const int height, const char ch);

//Square Function Prototype

void drawSquare(const int size, const char ch);

//Rectangle Function Prototype

void drawRectangle(const int length, const int height, const char ch);

//Menu Function Prototype

void showMenu();

/**
* Function <code>main</code> intializes values according
* to arguments
*<BR>
* @return 0, returns 0 to show that the program runs with no errors
*/

int main()
{
    int choice, size;
    char symbol;
    int height, length;

    do
    {
        showMenu();
        cin >> choice;

        cout << endl;

        switch (choice)
        {
        case 1:

            //Asking the user to enter values for length and symbol

            cout << "Enter length: ";
            cin >> size;

            cout << endl;

            cout << "Enter symbol: ";
            cin >> symbol;

            //Calling drawHorizontalLine Function

            drawHorizontalLine(size, symbol);

        case 2:
            drawVerticalLine(height, symbol);

        case 3:
            drawSquare(size, symbol);

        case 4:
            drawRectangle(length, height, symbol);

        default:
            cerr << "Wrong Choice!" << endl;
        }

    } while (choice != 5);

    cout << "Thank you, bye :)";

    return 0;
}

/**
* Function <code>showMenu</code> shows the menu choices according
* to arguments
*<BR>
*/

void showMenu()
{
    cout << "1. Draw a horizontal line" << endl;
    cout << "2. Draw a vertical line" << endl;
    cout << "3. Draw a square" << endl;
    cout << "4. Draw a rectangle" << endl;
    cout << "5. Exit" << endl;

    cout << endl;
    cout << "Enter your choice:";
}
