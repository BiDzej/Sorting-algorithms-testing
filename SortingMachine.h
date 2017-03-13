#ifndef SORTINGMACHINE_H
#define SORTINGMACHINE_H
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include "SortTest.h"

using namespace std;

class SortingMachine
{
    private:
    vector<SortTest*> m_tests;
    int* m_data;
    int m_len;

    public:
    SortingMachine(int len);
    ~SortingMachine();

    void randomData();
    void addAlgorithm(string name, SortFunction functionPointer);
    void runAll();
    void sortResults();

    vector<SortTest*>::const_iterator first() const;
    vector<SortTest*>::const_iterator last() const;

};

#endif
