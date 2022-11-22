#include "Data.h"
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
bool Datas::Age(int y, int m, int d)
{
    time_t now = time(nullptr);
    tm* ltm = localtime(&now);
    int age;
    age = 1900 + ltm->tm_year - y;
    if (1 + ltm->tm_mon < m)
        age -= 1;
    else if (1 + ltm->tm_mon == m && ltm->tm_mday < d)
        age -= 1;
    if (age >= 14) return true;
    else return false;
}
int Datas::DaysUntil(int m, int d)
{
    time_t now = time(nullptr);
    tm* ltm = localtime(&now);
    // days count
    int count = 0;
    // if current month lower than birthday
    if (1 + ltm->tm_mon < m) {
        // add a count based on a specifik month
        for (int i = 1 + ltm->tm_mon; i < m; i++) {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 ||
                i == 12)
                count += 31;
            if (i == 4 || i == 6 || i == 9 || i == 11)
                count += 30;
            if (i == 2 && (1900 + ltm->tm_year) % 4 == 0)
                count += 29;
            if (i == 2 && (1900 + ltm->tm_year) % 4 != 0)
                count += 28;
        }
    }
    // if current month bigger than birthday
    if (1 + ltm->tm_mon > m - 1) {
        // difference
        int goal = 1 + ltm->tm_mon + (12 - (1 + ltm->tm_mon - m));
        for (int i = 1 + ltm->tm_mon; i < goal; i++) {
            int num = i;
            if (num > 12)
                num -= 12;
            if (num == 1 || num == 3 || num == 5 || num == 7 || num == 8 ||
                num == 10 || num == 12)
                count += 31;
            if (num == 4 || num == 6 || num == 9 || num == 11)
                count += 30;
            if (num == 2 && (1900 + ltm->tm_year) % 4 == 0)
                count += 29;
            if (num == 2 && (1900 + ltm->tm_year) % 4 != 0)
                count += 28;
        }
    }
    if (ltm->tm_mday <= d && 1 + ltm->tm_mon == m)
    {
        if ((1900 + ltm->tm_year) % 4 == 0)
            count -= 366;
        else
            count -= 365;
    }

    // if current day lower than birthday
    if (ltm->tm_mday < d)
        count += d - ltm->tm_mday;
    // if current day bigger than birthday
    if (ltm->tm_mday > d)
    {
        if (1 + ltm->tm_mon == 1 || 1 + ltm->tm_mon == 3 || 1 + ltm->tm_mon == 5 ||
            1 + ltm->tm_mon == 7 || 1 + ltm->tm_mon == 8 || 1 + ltm->tm_mon == 10 ||
            1 + ltm->tm_mon == 12)
            count -= (ltm->tm_mday - d);
        if (1 + ltm->tm_mon == 4 || 1 + ltm->tm_mon == 6 ||
            1 + ltm->tm_mon == 9 || 1 + ltm->tm_mon == 11)
            count -= (ltm->tm_mday - d);
        if (1 + ltm->tm_mon == 2 && (1900 + ltm->tm_year) % 4 == 0)
            count -= (ltm->tm_mday - d);
        if (1 + ltm->tm_mon == 2 && (1900 + ltm->tm_year) % 4 != 0)
            count -= (ltm->tm_mday - d);
    }
    // output
    return count;
}
bool Datas::IsMore(int y, int m, int d)
{
    time_t now = time(nullptr);
    tm* ltm = localtime(&now);
    if (m < 1 || m>12)
        return true;
    if (d < 1)
        return true;
    // 31
    if (m == 1 && d > 31 || m == 3 && d > 31 || m == 5 && d > 31 || m == 7 && d > 31 ||
        m == 8 && d > 31 || m == 10 && d > 31 || m == 12 && d > 31)
        return true;
    // 30
    else if (m == 4 && d > 30 || m == 6 && d > 30 || m == 9 && d > 30 ||
        m == 11 && d > 30)
        return true;
    // 29
    else if (m == 2 && y % 4 == 0 && d > 29)
        return true;
    // 28
    else if (m == 2 && y % 4 != 0 && d > 28)
        return true;
    else if (y > (1900 + ltm->tm_year))
        return true;
    else if (y == (1900 + ltm->tm_year) && m > (1 + ltm->tm_mon))
        return true;
    else if (y == (1900 + ltm->tm_year) && m == (1 + ltm->tm_mon) && d > ltm->tm_mday)
        return true;
    else
        return false;

}