#include<vector>
#include<iostream>
class HeapSort
{
private:
    vector<int> heapVector;
private:
    void maxHeapIfy(vector<int>value, int i);
    ~HeapSort(){};
public:
    HeapSort(vector value);
    void buildMaxHeap();
    vector<int> getHeapSort();

};