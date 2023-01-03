#pragma once

#include <ctime>

class Datas
{
public:
    bool DaysUntil(int m, int d, int left);
    bool Age(int y, int m, int d);
    bool IsMore(int y, int m, int d);
};