#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;

};

void printlist(node* n)
{

while (n!= NULL){

    cout<< n->data <<" ";
    cout<< n->next <<" ";

}


}
