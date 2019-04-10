#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

//the function theoretically works for floats too

void quicksort(int *a, int start,int pivot)    // pass  0 , sizeof(a)/sizeof(*a) to sort the entire array
{
    int ref=a[pivot];                          //I chose to use the last element as the pivot because the array to sort is randomly filled, therefore ref is a random value
                                               //in case the array to sort is already partially sorted you may want to go for the median index
    int startIndex=start;
    int endIndex=pivot;
    while(startIndex<=endIndex)
    {
     if(a[startIndex]<ref) startIndex++;
     else if(a[endIndex]>ref) endIndex--;
     else                                                        //(startIndex<=endIndex)
     {
         int s=a[endIndex];
         a[endIndex]=a[startIndex];
         a[startIndex]=s;
         startIndex++;
         endIndex--;
     }
   }
   if(start<endIndex) quicksort(a,start,endIndex);
   if(startIndex<pivot) quicksort(a,startIndex,pivot);

}

void fillarray(int *a,int size) //fills the array with a random number between 1-100
{
    for(int i = 0;i<size;i++)
    {
        a[i] = rand()%100;
    }
}

//this is just to test the sort
int main()
{
    srand(time(NULL));
    cout<<"Insert a size for the array"<<endl;
    int size;
    cin>>size;
    int A[size];
    fillarray(A,size);
    cout<<"original array"<<endl;
    for(int i=0; i < size;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"\n"<<"\n"<<"\n"<<"ordered array"<<endl;
    quicksort(A,0,size-1);
    for(int i=0; i < size;i++)
    {
        cout<<A[i]<<" ";
    }

return 0;
}
