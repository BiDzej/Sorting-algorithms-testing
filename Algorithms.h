#ifndef ALGORITHMS_H
#define ALGORITHMS_H
#include<iostream>
using namespace std;

class Algorithms
{
public:
    static void QuickSortStart(int *data, int amount);
    static int QuickPart(int* data, int first, int last);
    static void QuickSort(int* data, int first, int last);
    static void InsertionSort(int* data, int N);
    static void SelectionSort(int* data, int N);
    static void BubbleSort(int* data, int N);
};

#endif
