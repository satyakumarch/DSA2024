#include<iostream>
using  namespace std;
class Maxheap
{
int *arr;
int size;//total element of the heap
int total_size;//total size of array 

public:
Maxheap(int n)
{
    arr=new int[n];
    size=0;
    total_size=n;

}
//insert into the heap
void insert(int value)
{
//if heap size is available or not
if(size==total_size)
{
    cout<<"heap overflow"<<endl;
    return;
}
arr[size]=value;
int index=size;
size++;

//compare it with its parent
while(index>0 && arr[(index-1)/2]<arr[index])
{
   swap(arr[index],arr[(index-1)/2]);
   index=(index-1)/2; 
};
cout<<arr[index]<<" is inserted into the heap"<<endl; 
}
void print()
{
    for(int i;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void Heapify(int index)
{
    int largest=index;
    int left=2*index+1;
    int right=2*index+2;

    //largest will store of the element which is greater between parent left child and right child
    if(left<size && arr[left]>arr[largest])
    largest=left;
    if(right<size && arr[right]>arr[largest])
    largest=right;

    if(largest!=index)
    {
        swap(arr[index],arr[largest]);
        Heapify(largest);
    }
}


void Delete()
{
    if(size==0)
    {
        cout<<"heap is empty"<<endl;
        return;
    }
    cout<<arr[0]<<" delete from the heap"<<endl;
    arr[0]=arr[size-1];
    size--;

    if(size==0)
    return;

    Heapify(0);

    
}

};



int main()
{
Maxheap h1(6);
h1.insert(2);
h1.insert(3);
h1.insert(4);
h1.Delete();
h1.Delete();

h1.Delete();

h1.Delete();
h1.Delete();
h1.Delete();

h1.print();



}