#include "pt4.h"
#include <string>
#include <iostream>
using namespace std;

void Solve()
{
    Task("Integer16");
    int a, p, v, t, a2;
    string a1;
    pt>>a;
    p = a % 10;
    v = a % 100 / 10;
    t = a / 100;
    a1 = to_string(t) + to_string(p) + to_string(v);
    a2 = stoi(a1);
    pt<<a2;
}
