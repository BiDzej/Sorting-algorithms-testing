#include "Algorithms.h"

void Algorithms::QuickSortStart(int *data, int amount)
{
    cout<<"QUICKSORT..."<<endl;
    QuickSort(data,0,amount-1);
}

int Algorithms::QuickPart(int* data, int first, int last)
{
    int x=data[first];
    int i=first,j=last,w;
    while(true)
    {
        while(data[j]>x) j--;
        while(data[i]<x) i++;
        if(i<j)
        {
            w=data[i];
            data[i]=data[j];
            data[j]=w;
            i++;
            j--;
        }
        else return j;
    }
}

void Algorithms::QuickSort(int* data, int first, int last)
{
    int q;
    if(first<last)
        {
            q=QuickPart(data,first,last);
            QuickSort(data,first,q);
            QuickSort(data,q+1,last);
        }
}

void Algorithms::InsertionSort(int* data, int N)
{
    cout<<"INSERTIONSORT..."<<endl;
    int x,j;
    for (int i = 1; i < N; i++)
        {
            x = data[i];
            for (j = i-1; j >= 0; j--)
                {
                    if (x < data[j]) data[j+1] = data[j];
                    else
                    break;
                }
            data[j+1] = x;
        }
}

void Algorithms::SelectionSort(int* data, int N)
{
    cout<<"SELECTIONSORT..."<<endl;
    int j,k;
    for (int i = 0; i < N-1; i++)
        {
            k = i;
            for (j = i+1; j < N; j++)
                {
                    if (data[j] < data[k]) k = j;
                }

            j = data[k];
            data[k] = data[i];
            data[i] = j;
        }
}

void Algorithms::BubbleSort(int* data, int N)
{
    cout<<"BUBBLESORT..."<<endl;
    for(int i = 0; i < (N-1); i++)
        {
        for(int j = (N-1); j >= 1+i; j--)
            {
                if(data[j] < data[j-1])
                    {
                        int x = data[j];
                        data[j] = data[j-1];
                        data[j-1] = x;
                    }
            }
        }
}

