#include "heap.h"
#include <iostream>

using namespace std;

void heap::getData()
{
	cout<<"Enter the size of the array: "<<endl;
	cin>>size;
	cout<<"Enter "<<size<<" elements: "<<endl;
	for(int i=1; i<=size; i++)
	{	
		//int nums = rand()%10+1; //random numbers to fill heap
		cin>>k[i];// = nums;
	}
}

void buildHeap(heap &h)
{
	int k, l, m, keys;
	for(k=2; k<=h.size; k++)
	{
		l = k;
		keys = h.k[l];
		m = l/2;
		while(l>1 && keys>h.k[m])
		{
			h.k[l] = h.k[m];
			l = m;
			m = l/2;
			if(m<1)
			{
				m = m+1;
			}
		}
		h.k[l] = keys;
	}
}

void heap::showData()
{
	cout<<"Heap Function Output: "<<endl;
	for(int i=1; i<=size; i++)
		cout<<k[i]<<endl;
}