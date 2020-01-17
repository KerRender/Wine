#include "WINE.h"

WINE::WINE()
{
    label = "";
    yrs = 0;
}

WINE::WINE(const char* l, int y)
{
    label = l;
    yrs = y;
    pair.first = {0};
    pair.second = {0};
}

WINE::WINE(const char* l, int y, const int yr[], const int bot[])
{
    label = l;
    yrs = y;
    pair.first = { 0 };
    pair.second = { 0 };
    for (int i = 0; i < yrs; i++)
    {
        pair.first[i] = yr[i];
        pair.second[i] = bot[i];
    }
}

void WINE::GetBottles()
{
    cout << "Enter " << label << " data for " << yrs << " year(s):\n";
    for (int i = 0; i < yrs; i++)
    {
        cout << "Enter a year: ";
        cin >> pair.first[i];                   // exception thrown!!!!
        cout << "Enter bottles for that year: ";
        cin >> pair.second[i];
    }
}

void WINE::Show()
{
    cout << "Wine: " << label << endl;
    cout << "\tYear\tBottles\n";
    for (int i = 0; i < yrs; i++)
        cout << "\t" << pair.first[i] << "\t" << pair.second[i] << endl;
}

string& WINE::Label()
{
    return label;
}

int WINE::sum()
{
    return pair.second.sum();
}