#include "Person.hpp"
#include "Customer.hpp"
#include <iostream>
#include "Queue.cpp"
#include <string>
#include "Mechanic.hpp"
#include <fstream>
#include "Appo.h"
using namespace std;

int main(){
    //declare a queue
    Queue<string> appqueue(variable);
    int Nummech=0,numcust=0,min=0,hour=0,count =0,numappo=0,age;
    ifstream fin;
    string temp,name,custname,id,box;
    void inputcustomer();
    void readmech();
    //check the number of doctors by checking the number of < in the file
    fin.open("Mechanic.txt");
    while(fin.eof()){
        fin>>temp;
        if(temp == "<"){
            Nummech++;
        }
    }
    fin.close();
    //create an array called docarray
    Mechanic* mecharray =new Mechanic[Nummech];
    cout<<"How many patients ";
    cin>>numcust;
    //asks the user for the number of patients to create the dynamic array
    Customer* Customerarray =new Customer[numcust];
    //ask each pateint for name and stores it in an array patient array
    for(int i=0;i<numcust;i++){
        cout<<"Enter Customer "<<i+1<<" Name ";
        cin>>name;
        cout<<"Enter Customer "<<i+1<<" appointment Hour ";
        cin>>hour;
        cout<<"Enter Customer "<<i+1<<" appointment Min ";
        cin>>min;
        //store inside each element in the array name of patient and we set appo hour and min
        (*(Customerarray+i)).setname(name);
        (*(Customerarray+i)).setappointment(hour, min);
    }
    //reads from file and stores in the array docarray the doctors name age id then gets
    fin.open("Mechanic.txt");
    for(int i=0;i<numdoc;i++){
                fin >> temp;
                fin >> name;
                fin >> age;
                fin >> id;
                fin >> numcust;
                
                
                
                (*(mecharray + i)).setname(name);
                (*(mecharray + i)).setage(age);
                (*(mecharray + i)).setid(id);
               
            //checks if there is any stored parients from before if so set them in the doc array
                for (int j = 0; j < numappo; j++)
                {
                    fin >> customername;
                    fin >> hour;
                    fin >> min;
                    (*(mecharray + i)).setappo(hour ,min , name);
                }
                fin >> temp;
                
    }
    fin.close();
    //we will get the hours of each elemt and min and check if its available for this doc and then if so set appotiment in the elment for this specific doc
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
    //check if
    for(int i=0;i<variable;i++){
        
        for(int j=0;j<Nummech;j++){
            box ="";
            if((!(*(mecharray + j)).getappo(i).hours)==NULL){
                box = box + (*(mecharray + j)).getappo(i).custname + "has booked an appointment at "+ to_string((*(mecharray + j)).getappo(i).hours)+ ":" + to_string((*(mecharray + j)).getappo(i).mins)+"with Dr: "+ (*(mecharray + j)).getname();

                appqueue.Enqueue(box);
                
            }
        }
    }
        appqueue.print();
    
}
    
    
    



