#ifndef WINE_H_
#define WINE_H_

#include <string>
#include <utility>
#include <valarray>
#include <iostream>

using namespace std;

class WINE
{
private:
    string label;
    int yrs;
    pair< valarray<int>, valarray<int> > pair;
public:
    WINE();
    WINE(const char*, int);
    WINE(const char*, int, const int[], const int[]);
    void GetBottles();
    void Show();
    string& Label();
    int sum();
};

#endif // !WINE_H_