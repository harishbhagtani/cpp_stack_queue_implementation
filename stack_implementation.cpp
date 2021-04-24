#include <iostream>
using namespace std;
//Implementing stack using array
class Stack{

public:

    //Max = 100
    static const int MAX = 100;
    int arr[MAX];
    int top = -1;

    int insertElement(int element){
        if(isFull()){
            cout<<"Overflow"<<endl;
            return -1;
        }
        top++;
        arr[top] = element;
        return top;
    }

    int deleteElement(){
        if(isEmpty()){
            cout<<"Underflow"<<endl;
            return -1;
        }
        int deletePosition = top;
        top--;
        return deletePosition;
    }

    void printStack(){
        cout<<"There are "<<getCount()<<" elements in stack."<<endl;
        for(int i = 0;i <= top;i++){
            cout<<arr[i]<<"\t";
        }
        cout<<endl;
    }

    bool isEmpty(){
        return top < 0;
    }

    bool isFull(){
        return top >= 100;
    }

    int getCount(){
        return top + 1;
    }
};

int main() {
    int isContinue = 1;
    int choice;
    Stack stack;
    while (isContinue == 1){
        cout<<"Which operation do you wanna perform? "<<endl;
        cout<<"1. Insert"<<endl;
        cout<<"2. Delete"<<endl;
        cout<<"3. Get Count"<<endl;
        cout<<"Please enter your choice: ";
        cin>>choice;
        if(choice == 1){
            int element;
            cout<<"Please enter element: ";
            cin>>element;
            stack.insertElement(element);
        } else if (choice == 2){
            stack.deleteElement();
        }
        stack.printStack();
        cout<<"Do you want to continue? : ";
        cin>>isContinue;
    }
    return 0;
}
