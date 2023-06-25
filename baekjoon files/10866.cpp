#include <iostream>
using namespace std;

struct Node{
    int x;
    Node* next;
    Node* prev;
};

Node* createNode(int x){
    Node* newNode = new Node;
    newNode->x = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

Node* head = NULL;
Node* tail = NULL;

int size(){
    Node* currPointer = head;
    int count = 0;
    while(currPointer != NULL){
        count++;
        currPointer = currPointer->next;
    }
    return count;
}

int empty(){
    if(size()) return 0;
    else return 1;
}

int front(){
    if(!empty()){
        cout<<head->x<<'\n';
        return head->x;
    }
    else{
        cout<<-1<<'\n';
        return -1;
    }
}

int back(){
    if(!empty()){
        cout<<tail->x<<'\n';
        return tail->x;
    }
    else{
        cout<<-1<<'\n';
        return -1;
    }
}

void push_front(int x){
    Node* newNode = createNode(x);
    if(!empty()){
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    else{
        head = newNode;
        tail = head;
    }
}

void push_back(int x){
    Node* newNode = createNode(x);
    if(!empty()){
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    else{
        tail = newNode;
        head = tail;
    }
}

void pop_front(){
    if(head != NULL){
        int output = head->x;
        if(tail == head){
            head = NULL;
            tail = NULL;
        }
        else{
            head = head->next;
            head->prev = NULL;
        }
        cout<<output<<'\n';
    }
    else{
        cout<<-1<<'\n';
    }
}

int pop_back(){
    if(head != NULL){
        int output = tail->x;
        if(tail == head){
            head = NULL;
            tail = NULL;
        }
        else{
            tail = tail->prev;
            tail->next = NULL;
        }
        cout<<output<<'\n';
        return output;
    }
    else{
        cout<<-1<<'\n';
        return -1;
    }
}


int main(void){
    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        string cmd;
        cin>>cmd;
        if(cmd == "push_front"){
            int x;
            cin>>x;
            push_front(x);
        }
        else if(cmd == "push_back"){
            int x;
            cin>>x;
            push_back(x);
        }
        else if(cmd == "pop_front"){
            pop_front();
        }
        else if(cmd == "pop_back"){
            pop_back();
        }
        else if(cmd == "size"){
            cout<<size()<<'\n';
        }
        else if(cmd == "empty"){
            cout<<empty()<<'\n';
        }
        else if(cmd == "front"){
            front();
        }
        else if(cmd == "back"){
            back();
        }
        else{
            cout<<"This cmd is not defined!"<<'\n';
        }
    }
    
    return 0;
}