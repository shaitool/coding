#include "vectorlist.h"
template<class T>
vectorlist<T>::vectorlist(int initialCapacity)
{
    if(initialCapacity < 0)
    {
        std::ostringstream s;
        s << "initialCapacity = " << initialCapacity << "must > 0 " << endl;
        throw illegalParameterValue(s.str());
    }
    element = new vector<T>(initialCapacity);
}
template<class T>
vectorlist<T>::vectorlist(const vector<T>& initialvector)
{
    if(initialvector.size() == 0)
    {
        std::ostringstream s;
        s << "initialvector size = 0 and " << "must > 0 " << endl;
        throw illegalParameterValue(s.str());
    }
    element = new vector<T>(initialvector);
}
