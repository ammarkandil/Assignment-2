#include "Queue.hpp"
#include "Mechanic.hpp"
#include<iostream>
#include "Appo.hpp"
using namespace std;
//we use template so that we could determine the type depending on what the program need
template <class T>
//constructer intilizes everything
Queue<T>::Queue (int size)
{
    values = new T[size];
    maxSize = size;
    front = 0;
    rear =-1;
    counter =0;
}
//checks if queue is full by seeing if counter exceeds max value
template <class T>
bool Queue<T>::IsFull(){
    if(counter<maxSize){
        return false;
    }
    else{
        return true;
    }
}
//checks if queue is empty by seeing if counter is  equal to counter which is -1
template <class T>
bool Queue<T>::IsEmpty(){
    if(counter){
        return false;
    }
    else{
        return true;
    }
}
//check if not full then enqueues
template <class T>
bool Queue<T>::Enqueue(T x){
    if(IsFull()){
        cout<<"The queue is full\n";
        return false;
    }
       else{
        rear=(rear+1%maxSize);
        values[rear]=x;
        counter++;
        return true;
    }
}
//removes from the queue the top object and decrements count
template <class T>
bool Dequeue(T &x){
    if(Queue<T>::IsEmpty()){
        cout<<"The queue is empty\n";
        return false;
    }
    else{
        x =Queue<T>::values[Queue<T>::front];
        Queue<T>::front=(Queue<T>::front+1)%Queue<T>::maxSize;
        Queue<T>::counter--;
        return true;
    }
}
//prints all the string values which is stored which has the app time and hour and patient name
template <class T>
void Queue<T>::print(){
    for(int i=0;i<maxSize;i++){
        cout<< values[i]<<endl;
    }
}
