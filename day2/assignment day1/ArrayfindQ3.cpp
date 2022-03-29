#include <stdio.h>
#include <iostream>

using namespace std;

void find(int array[],int length,int &max,int &min)
{   
    int i;
    min = max = array[0];
    for(i=1; i<length; i++)
    {
         if(min>array[i])
	     {
	 	    min=array[i];
         }
	     if(max<array[i])
         {
		    max=array[i];
    	 }
     }
}

int main()
{
    int array[] = { 5, -6, 21, 15, -8};
    const int length = sizeof(array) / sizeof(int);
    int max, min;
    find( array, length, max, min);
    cout<<" max = " <<max;
    cout<<" min = " <<min;
    return 0;
}