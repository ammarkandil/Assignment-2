#include "Person.hpp"
#include "Customer.hpp"
#include <iostream>
#include "Template.cpp"
#include <string>
#include "Mechanic.hpp"
#include <fstream>
#include "Appo.hpp"
using namespace std;

int main(){
    //declare a queue
    Queue<string> appqueue(variable);
    int Nummech=0,numcust=0,min=0,hour=0,count =0,numappo=0,age;
    ifstream fin;
    string temp,name,custname,id,box;
    void inputcustomer();
    void readmech();
   
    fin.open("Mechanic.txt");
    while(fin.eof()){
        fin>>temp;
        if(temp == "<"){
            Nummech++;
        }
    }
    fin.close();

    Mechanic* mecharray =new Mechanic[Nummech];
    cout<<"How many customers ";
    cin>>numcust;
 
    Customer* Customerarray =new Customer[numcust];

    for(int i=0;i<numcust;i++){
        cout<<"Enter Customer "<<i+1<<" Name ";
        cin>>name;
        cout<<"Enter Customer "<<i+1<<" appointment Hour ";
        cin>>hour;
        cout<<"Enter Customer "<<i+1<<" appointment Min ";
        cin>>min;
   
        (*(Customerarray+i)).setname(name);
        (*(Customerarray+i)).setappointment(hour, min);
    }

    fin.open("Mechanic.txt");
    for(int i=0;i<nummechanic;i++){
                fin >> temp;
                fin >> name;
                fin >> age;
                fin >> id;
                fin >> numcust;
                
                
                
                (*(mecharray + i)).setname(name);
                (*(mecharray + i)).setage(age);
                (*(mecharray + i)).setid(id);
               

                for (int j = 0; j < numappo; j++)
                {
                    fin >> custname;
                    fin >> hour;
                    fin >> min;
                    (*(mecharray + i)).setappo(hour ,min , name);
                }
                fin >> temp;
                
    }
    fin.close();
   
    for(int i=0;i<numcust;i++){
      hour=( (*(Customerarray+i)).getappointment()).hours;
        min=( (*(Customerarray+i)).getappointment()).mins;
        for(int j=0;j<Nummech;j++){
            if((*(mecharray + count)).isAvailable(hour,min)){
                (*(mecharray + count)).setappo(hour, min, ( (*(Customerarray+i)).getname()));
                                              count++;
            }
            else{
                count++;
            }
        }
    }

    for(int i=0;i<variable;i++){
        
        for(int j=0;j<Nummech;j++){
            box ="";
            if((!(*(mecharray + j)).getappo(i).hours)==NULL){
                box = box + (*(mecharray + j)).getappo(i).custname + "has booked an appointment at "+ to_string((*(mecharray + j)).getappo(i).hours)+ ":" + to_string((*(mecharray + j)).getappo(i).mins)+"with : "+ (*(mecharray + j)).getname();

                appqueue.Enqueue(box);
                
            }
        }
    }
        appqueue.print();
    
}
    
    
    



