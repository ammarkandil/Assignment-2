#include "Person.hpp"
#include <iostream>
#include <string>
using namespace std;
//default constructor
Person::Person(){
    name=" ";
    id=" ";
    age=0;
}
//constructer that takes values and itilizes them
Person::Person (string n,string idn,int a ){
    name=n;
    id=idn;
    age=a;
}
//setter for name
void Person::setname(string x){
    name=x;
}
//setter for id
void Person::setid(string x){
    id=x;
}
//setter for age
void Person::setage(int x){
    age=x;
}
//getter with type string to get name
string Person::getname(){
    return name;
}

//getter with type string to get id
string Person::getid(){
    return id;
}
//getter with type int to get age
int Person::getage(){
    return age;
}
