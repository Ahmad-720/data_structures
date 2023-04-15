#include <iostream>
using namespace std;

struct node{
    int data;
    node *link;
};

class queue{
    private:
    node *head;
    public:
    queue(){
        head = NULL;
    }
    void push(int data){
        node *new_node = (node *)malloc(sizeof(node));
        new_node->data = data;
        new_node->link = NULL;
        if(head == NULL){
            head = new_node;
        }
        else{
            node *ptr = head;
            while(ptr->link != NULL) ptr = ptr->link;
            ptr->link = new_node;
        }
    }
    int pop(){
        int result;
        if(head == NULL){
            cout << "the queue is empty." << endl;
        }
        else{
            result = head->data;
            head = head->link;
            return result;
        }
    }
    int seek(){
        return head->data;
    }
    void print(){
        node *ptr = head;
        while(ptr != NULL){
            cout << ptr->data << " ";
            ptr = ptr->link;
        }
        cout << endl;
    }
};
