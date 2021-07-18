#include<iostream>
#include<time.h>
#include<unistd.h>
using namespace std;
#define N 10

string queue[N];
int front =-1;
int rear=-1;

void enqueue(string name){
    if(rear==N-1){
        cout<< "Please with for the queue. Queue is Full"<< endl;
    }
    else if(front ==-1 && rear ==-1){
        front=rear=0;
        queue[rear]=name;
    }
    else{
        rear++;
        queue[rear]=name;
    }
}

void dequeue(){
    if(front ==-1 && rear ==-1){
        cout<< "Queue is Empty Now"<< endl;
    }
    else if(front==rear){
        cout<< queue[front]<< endl;
        front=rear=-1;
    }
    else{

        cout<< queue[front]<< endl;
        front++;
    }
}



void enter_name_list(){
    string name[10];
    int n=3;
    while(n--){
    cout<< "Enter Only 10 Customer's Name to Enter into Bank: "<< endl;
    for(int i=0; i<10; i++){
        cin>>name[i];
        enqueue(name[i]);
    }
    cout<< "Customer about to leave: "<< endl;
    for(int i=0; i<=10; i++){
    sleep(120);
    dequeue();

    }

    }
}
void close_annunocement(){
    cout<< "The Bank is closed Today."<< endl;
}


int main(){

enter_name_list();
close_annunocement();

return 0;
}

