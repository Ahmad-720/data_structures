#include <iostream>
using namespace std;

struct node {
    int data;
    node *link;
};

class stack{
    private:
    node *head;
    public:
    stack(){
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
            cout << "The stack is empty." << endl;
        }
        else if(head->link == NULL){
            result = head->data;
            head = NULL;
            return result;
        }
        else{
            node *ptr = head;
            node *pre;
            while(ptr->link != NULL){
                pre = ptr;
                ptr = ptr->link;
            }
            result = ptr->data;
            free(ptr);
            pre->link = NULL;
            return result;
        }
    }
    int seek(){
        if(head == NULL){
            cout <<"The stack is empty." << endl;
        }
        else{
            node *ptr = head;
            while(ptr->link != NULL)ptr = ptr->link;
            return ptr->data;
        }
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
