
#ifndef SORTTEST_H
#define SORTTEST_H

#include<string>
#include<string.h>
#include<time.h>
#include<iostream>

using namespace std;


typedef void(*SortFunction)(int*, int);

class SortTest
{
    private:
    string m_name;
    SortFunction m_functionPointer;
    const int* m_originalData;
    int* m_data;
    int m_len;
    int m_time;

    public:
    SortTest(string name, SortFunction functionPointer, const int* data, int len);
    ~SortTest();

    const int* getData() const;
    int getTime() const;
    string getName() const;

    void dataCopy();
    void run();

    SortTest& operator=(const SortTest& other);
};

#endif
