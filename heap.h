#include <iostream>

using namespace std;

class heap
{
	int size;
	int k[250];
public:
	void getData();
	void heapify(int low, int high);
	void  buildHeap();
	void showData();
};


