    /*
    Carter Fluckiger
    Data Structures 2nd Semester 2020
    Due: 1/28/20
    Lab number 2
    Description:
     */

#include <iomanip>
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
    
    list.UnionLists((NodeType*) 1 ,(NodeType*) 2, (ItemType) 5);
   

    

    
    
    return 0;
}
