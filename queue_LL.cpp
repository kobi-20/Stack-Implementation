#include<iostream> // Written By Shadan
using namespace std ;
struct node {
    int data ;
    struct node * next ;
};
struct node * front = NULL ;
struct node * rear = NULL ;
void enqueue(int x){
    struct node * new_node ;
    new_node = new struct node ;
    if(new_node == NULL){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        if(front == NULL){
            front = new_node ;
            rear = new_node ;
            new_node->data = x ;
            rear->next = NULL;
        }
        else{
            new_node->data = x ;
            rear->next = new_node ;
            rear = new_node ;
            rear->next = NULL ;
        }
    }
}
void dequeue(){
    if(front == NULL){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        struct node * temp ;
        temp = front ;
        cout<<"Dequeued Element is "<<temp->data<<endl;
        front = temp->next ;
        free(temp);
    }
}
void traversal(){
    if(front == NULL){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        struct node * temp ;
        temp = front ;
        while(temp!=NULL){
            cout<<temp->data<<"<--";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
}
void peek(){
    if(front == NULL){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"First in Queue is "<<front->data<<endl;
        
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
                traversal();
            case 5 :
                break;
            default :
            cout<<"Error Reenter "<<endl;
        } 
    }while(choice!=5);
    cout<<"Exited"<<endl;
    return 0 ;
}
