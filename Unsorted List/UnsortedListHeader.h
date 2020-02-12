#ifndef UnsortedListHeader_h
#define UnsortedListHeader_h

#include <iostream>
typedef int ItemType;
// Sets type def for itemtype

struct NodeType;
//initializer for Node struct

enum RelationshipType{
    Lesser = -1,Greater = 1, Equal = 0, Unknown
};
class UnsortedType
{
public:
    UnsortedType();
    //pre-conditions- That it exists in the implementation file
    //post-conditions- Resets the list for a new run of the program
    ~UnsortedType();
    //pre-conditions- That it is in the implementation file
    //post-conditions- It resets all the data and deletes points to null
    
    void MakeEmpty();
    //pre-conditions- It is accessed in the main
    //post-conditions- All items in the list are deleted
    bool IsFull();
    //pre-conditions- It is accessed in the main
    //post-conditions- checks to see if the list is longer than int MAX_ITEMS
    int GetLength();
    //pre-conditions- It is accessed in the main
    //post-conditions-returns the lenght of the list
    void InsertItem(ItemType item);
    //pre-conditions- It is accessed in the main
    //post-conditions- allows a new item to be inserted into the list
    void DeleteItem(ItemType item);
    //pre-conditions- It is accessed in the main
    //post-conditions- Deletes an item in the list
    void ResetList();
    //pre-conditions- It is accessed in the main
    //post-conditions-  Gets the list back to state that is ready for more functions
    ItemType GetNextItem();
    //pre-conditions- It is accessed in the main
    //post-conditions- Continues to the next node in the list
    NodeType* SearchList(ItemType item);
    //pre-conditions- It is accessed in the main
    //post-conditions- Looks through the list for a certain item
    RelationshipType ComparedTo(ItemType item);
    //pre-conditions- It is accessed in the main
    //post-conditions- Compares two items and checks to see if they are the same
    NodeType* UnionLists(NodeType* list2, NodeType* list1, ItemType item);
    //pre-conditions- It is accessed in the main
    //post-conditions- Combines two lists into one with no duplicates
private:
    NodeType* list1;
    NodeType* list2;
    // for UnionLists function
    NodeType* head;
    NodeType* currentpos;
    //Pointers for moving through the nodes
    int length;
    //lenght variable
    int MAX_ITEMS = 100000000;
    //max lenght variable
};
#endif /* UnsortedListHeader_h */
