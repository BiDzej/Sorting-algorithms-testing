#include "SortingMachine.h"

SortingMachine::SortingMachine(int len)
{
    m_data=new int[len];
    m_len=len;
}

SortingMachine::~SortingMachine()
{
    delete[] m_data;
    for (vector<SortTest*>::const_iterator i = first(); i != last(); i++)
    {
        delete (*i);
    }
    return;
}

void SortingMachine::randomData()
{
    for (int i=0; i<m_len;i++)
    {
        m_data[i]=rand();
    }
}

void SortingMachine::addAlgorithm(string name, SortFunction functionPointer)
{
    SortTest *test=new SortTest(name, functionPointer, m_data, m_len);
    m_tests.push_back(test);
}

void SortingMachine::runAll()
{
    for(unsigned i=0; i<m_tests.size(); i++) m_tests[i]->run();
}

void SortingMachine::sortResults()
{
    unsigned N=m_tests.size();
    for(unsigned i = 0; i < (N-1); i++)
        {
        for(unsigned j = (N-1); j >= 1+i; j--)
            {
                if(m_tests[j]->getTime() < m_tests[j-1]->getTime())
                    {
                        SortTest *x = m_tests[j];
                        m_tests[j] = m_tests[j-1];
                        m_tests[j-1] = x;
                    }
            }
        }
}

vector<SortTest*>::const_iterator SortingMachine::first() const
{
    return m_tests.cbegin();
}

vector<SortTest*>::const_iterator SortingMachine::last() const
{
    return m_tests.cend();
}

