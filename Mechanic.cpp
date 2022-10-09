
#include "Mechanic.hpp"
#include "Person.hpp"
#include <iostream>
#include "Appo.hpp"
#include <string>
using namespace std;
//creates a null for the array appointments
Mechanic::Mechanic()
{
    counter = -1;
    for(int i=0;i<variable;i++){
        appointment[i].hours = NULL;
        appointment[i].mins =NULL;
    }

}

//setters and getters
void Mechanic::setname(string x){
    name=x;
}
string Mechanic::getname(){
    return name;
}
void Mechanic::setid(string x){
    id=x;
}
string Mechanic::getid(){
    return id;
}
void Mechanic::setage(int x){
    age=x;
}
int Mechanic::getage(){
    return age;
}

void Mechanic::setappo(int hours,int mins, string name){
    int pos;
    pos= hours *2 + mins / 30;
    appointment[pos].hours=hours;
    appointment[pos].mins=mins;
    appointment[pos].patname=name;
    
}
    //incrments the counter
    void Mechanic::counterincrement(){
        counter++;
    }
    //decrement the counter
    void Mechanic::counterdecrement(){
        counter--;
    }

bool Mechanic::isAvailable(int hour,int min)
{
    int position;
    position = hour *2 +min /30;
    if(appointment[position].hours==NULL)
        {
            return true;
            }
    else{
        return false;}
        }
        

Appointment Mechanic::getappo(int po){
    return appointment[po];
    
}
