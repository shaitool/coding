#ifndef LINELIST_H
#define LINELIST_H
#include<iostream>
template<class T>
class linelist
{
    public:
        virtual ~linelist(){};
        virtual bool empty() const = 0;
        virtual int size() const =0;
        virtual T& get(int theIndex) const = 0;
        virtual int indexOf(const T& theElement) const = 0;
        virtual void erase(int thIndex) const = 0;
        virtual void insert(int theIndex, const T& theElement) = 0;
        virtual void output(std::ostream& out) const =0;
};

#endif