#include "pt4.h"
#include <iostream>
using namespace std;

void Solve()
{
    Task("Boolean22");
    int a, p, v, t;
    char a1;
    bool b;
    pt>>a;
    p = a % 10;
    v = a % 100 / 10;
    t = a / 100;
    if ((((t < v) && (v < p)) || ((t > v) && (v > p))) && ((p != v) && (v != t) && (t != p)))
    {
        b = true;
    }
    else
    {
        b = false;
    }
    pt<<b;
}
