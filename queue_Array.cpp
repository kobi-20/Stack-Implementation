#include<iostream> // Written By Shadan
using namespace std;
#define SIZE 5
int queue[SIZE];
int front = -1 , rear = -1 ;
void enqueue(int x){
    if(rear == SIZE -1){
        cout<<"Queue is Full"<<endl;
    }
    else{
        if(front == -1){
            front++;
        }
        rear++;
        queue[rear] = x;
    }
}
void dequeue(){
    if(front == -1 || front > rear){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Dequeued element is "<<queue[front]<<endl;
        front++;
        if(front > rear){
            front = rear = -1 ;
        }
    }
}
void peek(){
    if(front == -1){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"1st Element in Queue is "<<queue[front]<<endl;
    }
}
void display(){
    if(front == -1){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"All Element in Queue "<<endl;
        for(int i=front ; i<=rear ; i++){
            cout<<queue[i]<<endl;
        }
    }
}
int main(){
    int choice = 0, val ;
    do{
        cout<<"\t\t<------QUEUE------>"<<endl;
        cout<<"\t\t1. Enqueue"<<endl;  
        cout<<"\t\t2. Dequeue"<<endl;  
        cout<<"\t\t3. Peek"<<endl;  
        cout<<"\t\t4. Display"<<endl;  
        cout<<"\t\t5. Exit"<<endl;
        cout<<"Enter your Response : ";
        cin>>choice; 
        switch(choice){
            case 1 :
                cout<<"Enter value to enqueue : ";
                cin>>val;
                enqueue(val);
                break;
            case 2 :
                dequeue();
                break;
            case 3 :
                peek();
                break;
            case 4 :
                display();
            case 5 :
                break;
            default :
            cout<<"Error Reenter "<<endl;
        } 
    }while(choice!=5);
    cout<<"Exited"<<endl;
    return 0 ;
}