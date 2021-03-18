#include<iostream>
using namespace std;

struct List {
    int value;
    List *next;
    List()
    {
        value = 0;
        next = NULL;
    }
}*root;


void insertData(int value)
{
    List *current = root;
    while(current->next !=NULL)
    {
        current = current->next;
    }
    current->next = new List();
    current->next->value = value;
}
 void Traverse()
 {
    List *current = root;
     while (current->next !=NULL )
     {
         current = current->next;

         cout<<current->value<<"|";
     }
     cout <<endl;
 }


void deleteData(int value)
{
    List *current = root;
    while(current->next !=NULL && current->next->value !=value)
    {
        current = current->next;
    }
    if(current->next == NULL)
    {
        cout<<"Number not found";
    }
    else {
        current->next = current->next->next;
        cout<<"Number "<<value<<" deleted successfully"<<endl;
    }
}


int main()
{
    root = new List();
    for(int i=0; i<=9;i++)
    {
        insertData(i);
    }
    Traverse();

    int num;
    cout <<"enter number for delete:";
    cin >>num;
    deleteData(num);

    Traverse();
    return 0;

}
