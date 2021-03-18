#include<iostream>
using namespace std;


struct LinkedList {
    int value;
    LinkedList *next;
    LinkedList(){
        value = 0;
        next = NULL;
    }
}*root;

void addElement(int value)
{
    LinkedList *current = root;
    while(current ->next !=NULL)
    {
        current  = current->next;
    }
    current->next = new LinkedList();
    current->next->value = value;
}

 void Traverse()
 {
     LinkedList *current = root;
     while (current->next !=NULL )
     {
         current = current->next;

         cout<<current->value<<"|";
     }
 }


 int main()
 {
     int n;
    cout<<"insert a number for adding value in link list:";
     cin >>n ;
     root = new LinkedList();
     for(int i = 0; i<=n; i++)
     {
         addElement(i);
     }

     Traverse();

 }

