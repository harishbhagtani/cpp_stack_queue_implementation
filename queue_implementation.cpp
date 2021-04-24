#include <iostream>
using namespace std;

//implementing queue using array

class Queue{
public:
    static const int SIZE = 100;
    int queueArray[SIZE];
    int rear = -1;

    int insertElement(int val){
        rear++;
        queueArray[rear] = val;
        return rear;
    }

    int deleteElement(){
        for(int i = 0;i<rear;i++){
            cout<<"Loop running "<<i + 1<<" times";
            queueArray[i] = queueArray[i+1];
        }
        rear--;
        return rear;
    }


    int isFull(){
        return SIZE == rear-1;
    }

    void printQueue(){
        for(int i = 0;i<= rear;i++){
            cout<<queueArray[i]<<endl;
        }
    }
};





int main() {
    int isContinue = 1;
    int choice;
    Queue queue;
    while (isContinue == 1){
        cout<<"Which operation do you wanna perform? "<<endl;
        cout<<"1. Insert"<<endl;
        cout<<"2. Delete"<<endl;
        cout<<"Please enter your choice: ";
        cin>>choice;
        if(choice == 1){
            int element;
            cout<<"Please enter element: ";
            cin>>element;
            queue.insertElement(element);
        } else if (choice == 2){
            queue.deleteElement();
        }
        queue.printQueue();
        cout<<"Do you want to continue? : ";
        cin>>isContinue;
    }
}
