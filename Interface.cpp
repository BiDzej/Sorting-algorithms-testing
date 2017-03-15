#include"Interface.h"

int Interface::chooseQuanity()
{
    system("clear");
    int n;
    cout<<"Write amount of variables: ";
    cin>>n;
    assert(n);
    return n;
}

void Interface::run()
{
    SortingMachine machine(chooseQuanity());
    machine.randomData();
    runSortingMachine(machine);
    showResults(machine);
}

void Interface::runSortingMachine(SortingMachine& machine)
{
    string x="QuickSort";
    machine.addAlgorithm(x, &Algorithms::QuickSortStart);
    x="InsertionSort";
    machine.addAlgorithm(x, &Algorithms::InsertionSort);
    x="BubbleSort";
    machine.addAlgorithm(x, &Algorithms::BubbleSort);
    x="SelectionSort";
    machine.addAlgorithm(x, &Algorithms::SelectionSort);
    machine.runAll();
}

void Interface::showResults(SortingMachine& machine)
{
    system("clear");
    machine.sortResults();
	double TIME;
    for (vector<SortTest*>::const_iterator i = machine.first(); i != machine.last(); i++)
    {
		TIME=1.0*(*i)->getTime()/CLOCKS_PER_SEC;
		cout << setw(15) << left << (*i)->getName() << setw(10) << setprecision(3) << fixed << right << TIME << "s" << endl;
    }
    getchar();
}
