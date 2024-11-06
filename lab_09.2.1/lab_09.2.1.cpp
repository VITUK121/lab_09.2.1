#include <iostream>
#include "macros.h"

using namespace std;

int main()
{
    int x, y;
    int w;

    #if Z > 10
        cout << "x = "; cin >> x;
        PRINT_I(x);
        cout << "y = "; cin >> y;
        PRINT_I(y);
        w = MAX(POW_3(x), POW_2(x + y));
        PRINT_R(w);

    #elif Z <= 10
        cout << "x = "; cin >> x;
        PRINT_I(x);
        w = MIN(ABS(x - Z), ABS(x + Z));
        PRINT_R(w);
    #endif
}