#ifndef Mechanic_hpp
#define Mechanic_hpp

#include "Person.hpp"
#include "Customer.hpp"
#include "Appo.hpp"

#define variable 48
class Mechanic: public Person{
private:
    int counter;
    Appointment appointment[variable];
    
public:
    Mechanic();
    void setname(string);
    string getname();
    void setid(string);
    string getid();
    void setage(int);
    int getage();
    void counterincrement();
    void counterdecrement();
    bool isAvailable(int ,int);
    void setappo(int,int,string);
    Appointment getappo(int);
    


    
};




#endif /* Mechanic_hpp */
