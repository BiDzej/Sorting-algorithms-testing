#include <time.h>
#include <cstdio>
#include <iomanip>
#include "Algorithms.h"
#include "SortingMachine.h"
#include "SortTest.h"
using namespace std;

int main()
{
    system("clear");
	SortingMachine machine(100000);
    machine.randomData();
    string x="QuickSort";
    machine.addAlgorithm(x, &Algorithms::QuickSortStart);
    x="InsertionSort";
    machine.addAlgorithm(x, &Algorithms::InsertionSort);
    x="BubbleSort";
    machine.addAlgorithm(x, &Algorithms::BubbleSort);
    x="SelectionSort";
    machine.addAlgorithm(x, &Algorithms::SelectionSort);

    machine.randomData();
    machine.runAll();
    machine.sortResults();

    system("clear");
	double TIME;
    for (vector<SortTest*>::const_iterator i = machine.first(); i != machine.last(); i++)
    {
		TIME=1.0*(*i)->getTime()/CLOCKS_PER_SEC;
		cout << setw(15) << left << (*i)->getName() << setw(10) << setprecision(3) << fixed << right << TIME << "s" << endl;
    }
    getchar();
    return 0;
}
