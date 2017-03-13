#include "SortTest.h"

SortTest::SortTest(string name, SortFunction functionPointer, const int* data, int len):m_name(name)
{
    m_name=name;
    m_functionPointer=functionPointer;
    m_originalData=data;
    m_len=len;
    m_time=0;
    m_data=new int[m_len];
}

SortTest::~SortTest()
{
    delete[] m_data;
    return;
}

const int* SortTest::getData() const
{
    return m_originalData;
}

int SortTest::getTime() const
{
    int a=m_time;
    return a;
}

string SortTest::getName() const
{
    return m_name;
}

void SortTest::dataCopy()
{
    for(int i=0; i<m_len; i++) m_data[i]=m_originalData[i];
}

void SortTest::run()
{
    dataCopy();
    int start=clock();
    m_functionPointer(m_data, m_len);
    m_time=clock()-start;
}

SortTest& SortTest::operator=(const SortTest& other)
{
    if (this != &other)
    {
        this->m_name = other.m_name;
        this->m_functionPointer = other.m_functionPointer;
        this->m_originalData = other.m_originalData;

        delete[] this->m_data;
        this->m_data = new int[other.m_len];
        memcpy(this->m_data, other.m_data, other.m_len);

        this->m_len = other.m_len;
        this->m_time = other.m_time;
    }

    return *this;
}
