#include "UnsortedListHeader.h"
#include <iostream>

struct NodeType
{
    ItemType info;
    NodeType* next;
};
//struct for the nodes

//Constructor
UnsortedType::UnsortedType()
{
    //To start the program with a clear list
    length = 0;
    head = nullptr;
}
//Destructor
UnsortedType::~UnsortedType()
{
    MakeEmpty();
}
void UnsortedType:: ResetList()
{
    currentpos = nullptr;
    head = nullptr;
    length = 0;
    //wipes out pointers
}
int UnsortedType::GetLength()
{
    return length;
}

void UnsortedType::MakeEmpty()
{
    while(head != nullptr)
    {
        currentpos = head;
        head = head ->next;
        delete currentpos;
    }
    length = 0;
    //Gets rid of all information stored in the nodes
}


void UnsortedType::InsertItem(ItemType item)
{
    NodeType* location = new NodeType;
    location->info = item;
    location->next = head;
    head = location;
    
    length++;
    //adds a new item to the list
}



bool UnsortedType::IsFull()
{
        if(length + 1>MAX_ITEMS)
        {
        return false;
        }
        else
        {
            return true;
        }
    //checks to see if list is full and returns bool value
}


void UnsortedType:: DeleteItem(ItemType item)
{
    NodeType* location = head;
     if(item == head->info)
     {
         currentpos = location;
         head = head->next;
     }
     else
     {
         while(item == location->info)
         {
             location = location->next;
              currentpos = location->next;
             location->next = (location->next)->next;
         }
     }
    delete currentpos;
    length--;
    //deletes item and lowers length by 1 to account for that
}

ItemType UnsortedType:: GetNextItem()
{
    if(currentpos == nullptr)
    {
        currentpos = head;
    }
    else
    {
    currentpos = currentpos->next;
    }
    return currentpos->info;
    
    //moves to next node if it exists and get the item info from it
}

RelationshipType UnsortedType:: ComparedTo(ItemType item)
{
    
    if(item > currentpos->info)
        return Greater;
    if(item < currentpos->info)
        return Lesser;
    if(item == currentpos->info)
        return Equal;
    else
    {
        return Unknown;
    }
    //looks at relationship between two items in a list
}


NodeType* UnsortedType:: SearchList(ItemType item)
{
    currentpos = head;
    while ( currentpos->info != item || currentpos->next != nullptr )
    {
        currentpos = currentpos->next;
    }
    if(currentpos->info == item)
    {
        return currentpos;
    }
    else
    {
        return nullptr;
    }
    //looks through list to find matchs of a variable
   
}
   NodeType* UnsortedType:: UnionLists(NodeType* list2,NodeType* list1, ItemType item)
{
    NodeType* list3;
    head = list1;
    currentpos = list2;
    currentpos->info = item;
    do
    {
        SearchList(item);

        if(SearchList(item))
        {
            InsertItem(currentpos->info);
        }
        else
        {
            currentpos = currentpos->next;
            
        }
        
    }while(currentpos->next != nullptr);
    return list3;
    //combines two lists and returns the final large list
}

