#include "Appo.hpp"
#include "Person.hpp"
#ifndef Customer_hpp
#define Customer_hpp

#include <string>
using namespace std;

class Customer : public Person{
    

private:
    string Mechanicid;
    Appointment appointment;
public:
    Customer();
    Customer(string, string,int,int, int, string);
    void setname(string);
    string getname();
    void setid(string);
    string getid();
    void setage(int);
    int getage();
    void Setmechanicid(string);
    string getmechanicid();
    void setappointment(int,int);
    Appointment getappointment();
    bool operator>(Customer &);
    bool operator<(Customer &);
    bool operator==(Customer &);

};


    

