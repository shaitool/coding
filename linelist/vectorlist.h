#ifndef VECTORLIST_H
#define VECTORLIST_H
#include"linelist.h"
#include <vector>
#include <iostream>
#include <sstream>
#include "exception.h"


template<class T>
class vectorlist : public linelist<T>
{
public:
    //构造函数
    vectorlist(int initialCapacity = 0);
    vectorlist(const vector<T>&);
    
    ~vectorlist()
    {
        delete element;
    }
private:
    std::vector<T>* element;
};

#endif