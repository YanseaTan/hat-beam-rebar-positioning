#include <iostream>
#include "main.h"

using namespace std;

int main()
{
    cout << "height: " << endl;
    cin >> height;
    cout << "width: " << endl;
    cin >> width;

    a_x = LAYER + 3 * RADIUS;
    a_y = LAYER + RADIUS + 300;
    b_x = a_x;
    b_y = a_y - 300;
    c_x = width - a_x;
    c_y = b_y;
    d_x = c_x;
    d_y = a_y;
    e_x = a_x - 2 * RADIUS;
    e_y = b_y;
    g_x = e_x;
    g_y = height - b_y;
    h_x = width - e_x;
    h_y = g_y;
    j_x = h_x;
    j_y = e_y;

    cout << "A: (" << a_x << ", " << a_y << ")" << endl;
    cout << "B: (" << b_x << ", " << b_y << ")" << endl;
    cout << "C: (" << c_x << ", " << c_y << ")" << endl;
    cout << "D: (" << d_x << ", " << d_y << ")" << endl;
    cout << "E: (" << e_x << ", " << e_y << ")" << endl;
    cout << "G: (" << g_x << ", " << g_y << ")" << endl;
    cout << "H: (" << h_x << ", " << h_y << ")" << endl;
    cout << "J: (" << j_x << ", " << j_y << ")" << endl;

    system("pause");
    return 0;
}