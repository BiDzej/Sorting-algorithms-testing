#ifndef INTERFACE_H
#define INTERFACE_H
#include<iostream>
#include<assert.h>
#include<string>
#include <iomanip>
#include <stdio.h>
#include <time.h>

#include "Algorithms.h"
#include "SortingMachine.h"
#include "SortTest.h"

using namespace std;

class Interface
{
    public:
        void run();
        int chooseQuanity ();
        void runSortingMachine(SortingMachine& machine);
        void showResults (SortingMachine& machine);
};



#endif // INTERFACE_H
