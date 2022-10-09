#include "Person.hpp"
#include "Customer.hpp"
#include <iostream>
#include "Appo.hpp"
using namespace std;


void Customer::setname(string x)
{
        Name=x;
}
string Customer::getname(){
    return Name;
}
void Customer::setid(string x){
    Id=x;
}
string Customer::getid(){
    return Id;
}
void Customer::setage(int x)
{
    age=x;
}
int Customer::getage(){
    return age;
}


void Customer::setmechanicd(string x){
    Mechanicid=x;
}
string Customer::getmechaincid(){
    return Mechanicid;
}

//default constructor
Customer::Customer(){
    
}
//constructor
Customer::Customer(string n, string idn, int agen, int hourz, int minz, string mechid) : Person(n, idn, agen)
{
    appointment.hours = hourz;
    appointment.mins = minz;
    Mechanicid = mechid;
}
//sets the appintment by taking the hours and mins and adding it to the struct of type appointment
    void Customer::setappointment(int h,int m){
        appointment.hours=h;
        appointment.mins=m;
    }
//gets appointment which is a struct
    Appointment Customer::getappointment(){
        return appointment;
    }
//overloaded
bool Customer::operator<(Customer &p2){
   
    if(appointment.hours<p2.appointment.hours){
        return true;
    }
    else if(appointment.hours>p2.appointment.hours){
        return false;
    }
    else{
        if(appointment.mins<p2.appointment.mins){
            return true;
        }
        else{
            return false;
        }
    }
}
//overloaded
bool Customer::operator>(Customer &p2){
    if(appointment.hours>p2.appointment.hours){
        return true;
    }
    else if(appointment.hours<p2.appointment.hours){
        return false;
    }
    else{
        if(appointment.mins>p2.appointment.mins){
            return true;
        }
        else{
            return false;
        }
    }
}

bool Customer::operator==(Customer &p2){
    if(appointment.hours==p2.appointment.hours){
        if(appointment.mins==p2.appointment.mins){
            return true;
        }
    }
    else{
        return false;
    }
    return false;
}
