#ifndef PERSON
#define PERSON
#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
    //protected data members so that it could be used when inherated
    string name;
    string id;
    int age;
public:
    Person();
    Person(string,string,int);
    void setname(string);
    void setid(string);
    void setage(int);
    string getname();
    string getid();
    int getage();
    void print();

};


#endif /* Person_h */
