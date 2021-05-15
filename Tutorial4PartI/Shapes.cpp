/** \file Shapes.cpp
* \brief Implementation file for a drawing library
* \details Library contains functionality for drawing basic shapes
* \author Phoebe Zizirou
* \version 0.1
* \date 15/05/2021
* \copyright UNIC
*/

#include "Shapes.h"
#include <iostream>
#include <cassert>
#include<cstdlib>

using namespace std;

/**
* Function <code>drawHorizontalLine</code> draws horizontal line according
* to arguments
*<BR>
* @param length The length of line to be drawn, must be greater than 0
* @param ch The symbol used to draw the line
*/

void drawHorizontalLine(const int length, const char ch)
{
    assert(length > 0);

    cout << "I am drawHorizalLine" << endl;

    int i;

    for (i = 0; i < length; i++)
        cout << ch;

    cout << endl;
}


/**
* Function <code>drawVerticalLine</code> draws vertical line according
* to arguments
*<BR>
* @param height The height of line to be drawn, must be greater than 0
* @param ch The symbol used to draw the line
*/

void drawVerticalLine(const int height, const char ch)
{
    assert(height > 0);

    cout << "I am drawVerticalLine" << endl;

    int i;

    for (i = 0; i < height; i++)
        cout << ch << endl;

    cout << endl;
}

/**
* Function <code>drawSquare</code> draws a square according
* to arguments
*<BR>
* @param size The size of square to be drawn, must be greater than 0
* @param ch The symbol used to draw the square
*/
void drawSquare(const int size, const char ch)
{
    assert(size > 0);

    cout << "I am drawSquare" << endl;

    int i, j;
    char arr[100][100];

    //Filling the columns of square

    for (i = 0; i < size; i++)
    {
        arr[i][0] = ch;
        arr[i][size - 1] = ch;
    }

    //Filling the rows of square

    for (j = 1; j < size - 1; j++)
    {
        arr[0][j] = ch;
        arr[size - 1][j] = ch;
    }

    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
            cout << arr[i][j];
}

/**
* Function <code>drawRectangle</code> draws horizontal a rectangle according
* to arguments
*<BR>
* @param length The length of the rectangle to be drawn, must be greater than 0
* @param height The height of the rectangle to be drawn, must be greater than 0
* @param ch The symbol used to draw the line
*/

void drawRectangle(const int length, const int height, const char ch)
{
    assert(length > 0);
    assert(height > 0);

    cout << "I am drawRectangle" << endl;

    int i, j;
    char arr[100][100];

    //Filling the columns of the Rectangle

    for (i = 0; i < height; i++)
    {
        arr[i][0] = ch;
        arr[i][length - 1] = ch;
    }

    //Filling the rows of the Rectangle

    for (j = 0; j < height; j++)
    {
        arr[0][j] = ch;
        arr[height - 1][j] = ch;
    }

    for (i = 0; i < length; i++)
        for (j = 0; j < height; j++)
            cout << arr[i][j];
}