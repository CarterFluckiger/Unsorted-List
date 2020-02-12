    /*
    Carter Fluckiger
    Data Structures 2nd Semester 2020
    Due: 2/11/20
    Lab: Unsorted Linked List
    Description: A data structure of objects arranged in a linear order. The order is determined
     by a pointer in each object. See definition on pg. 134 and implementation on pg. 167 of
     the 6th edition of C++ Plus Data Structures. Your welcome to learn from the books
     implementation, however, make sure to write your own code. This unsorted list must be
     implemented with pointers. You will then write a client code that will have a function that
     will take two unsorted lists and perform the union set operation. The resulting new
     unsorted list will consist of all the unique items from the original two lists with no
     duplicates.

    Class Names: ItemType, UnsortedType
     */

#include <iostream>
#include "UnsortedListHeader.h"

using namespace std;

int main()
{
    UnsortedType list;
    list.InsertItem((ItemType)42);
    list.InsertItem((ItemType) 35);
    
    list.DeleteItem((ItemType)42);
    cout<<list.GetNextItem()<<endl;
    //Some functions for testing
    return 0;
}
