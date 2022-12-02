
#include<iostream>
using namespace std;
struct node {
    int data ;
    struct node * next ;
};
struct node * head = NULL ;
void push(int x){
    struct node * new_node = new struct node ;
    if(new_node == NULL){
        cout<<"Stack is full"<<endl;
    }
    else{
        new_node->data = x ;
        new_node->next = head ;
        head = new_node ;
        cout<<"value inserted"<<endl;
    }
}
void pop(){
    struct node * temp ;
    temp = head ;
    if(head == NULL){
        cout<<"Stack is underflow"<<endl;
    }
    else{
        cout<<"Popped Element is "<<temp->data<<endl;
        head =temp->next;
        free(temp);
    }
}
void display(){
    struct node * temp ;
    temp = head ;
    if(head == NULL){
        cout<<"Stack is underflow"<<endl;
    }
    else{
        cout<<"<------STACK------>"<<endl;
        while(temp->next != NULL){
            cout<<temp->data<<"--->";
            temp = temp->next;
        }
        cout<<temp->data<<endl;
    }
}
int main(){
    int val, choice;
    do
    {
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter Your Response : ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter value to push : ";
            scanf("%d", &val);
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4 :
            break;
        default :
            cout<<"Error Reenter"<<endl;
        }
    }while(choice!=4);
    return 0;
}