#include "heap.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void heap::getData()
{
	cout<<"Enter the size of the array: "<<endl;
	cin>>size;
	cout<<"Enter "<<size<<" elements: "<<endl;
	for(int i=1; i<=size; i++)
	{	
		int nums = rand()%10+1; //random numbers to fill heap
		k[i] = nums;
		
	}
	buildHeap();
}

void heap::heapify(int low, int high)
{
	int comparisons = 0;
	int largeIndex;
	int keys = k[low];
	largeIndex = 2*low+1;
	while(largeIndex<=high)
	{
		comparisons++;
		if(largeIndex<high)
			if(k[largeIndex] < k[largeIndex+1])
				largeIndex = largeIndex+1;
		
		comparisons++;
		if(keys > k[largeIndex])
			break;
		else
		{
			k[low] = k[largeIndex];
			low = largeIndex;
			largeIndex = 2*low+1;
		}
	}
	k[low] = keys;
	cout<<"Comparisons: "<<comparisons<<endl;
}
void heap::buildHeap()
{
	int length = size;
	for(int i=length/2-1; i>=0; i--)
		heapify(i, length-1);
}
void heap::showData()
{
	cout<<"Heap Function Output: "<<endl;
	for(int i=1; i<=size; i++)
		cout<<k[i]<<endl;
}