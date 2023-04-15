#include <iostream>
using namespace std;

class stack{
    private:
    int *ptr;
    int i;
    int n;
    public:
    int length;
    stack(int x){
        ptr = (int *)malloc(x*sizeof(int));
        n = x;
        i = -1;
        length = 0;
    }
    void push(int data){
        i++;
        if(i == n){
            cout << "stack is full." << endl;
            i--;
        }
        else{
        *(ptr+i) = data;
        length++;
        }
    }
    int pop(){
        if(i == -1){
            cout << "the stack is empty." << endl;
        }
        else{
            int result = *(ptr+i);
            i--;
            length--;
            return result;
        }
    }
    int seek(){
        if(i == -1){
            cout << "the stack is empty." << endl;
        }
        else{
            return *(ptr+i);
        }
    }
    void print(){
        for(int j = 0;j <= i;j++) cout << *(ptr+j) << " ";
        cout << endl;
    }
};
