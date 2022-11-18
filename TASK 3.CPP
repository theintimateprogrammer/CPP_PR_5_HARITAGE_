
#include<iostream>
using namespace std;

class read{
    public:
    
    int id;
    char name[100];
    
    
    void readdata(){
         cout<<"enter the employees id:";
         cin>>id;
         
         cout<<"eneter the employees name:";
         cin>>name;
    }
    
};


class print {
    
    public:
    
    int age;
    char department;
    void printdata(){
    
    cout << "enter the age:";
    cin>>age;
    cout << "enter the department:"<< ;
    cin>>department;
}
         
};        
         
class employees : public read,public print{
    
    public:
    
    void employeesdata(){
        
    cout<<"read and print data in third class :"<<endl;
        cout<<"id::"<<id<<endl;
        cout<<"name::"<<name<<endl;
        cout<<"age::"<<age<<endl;
        cout<<"department::"<<department<<endl;
        
        
        
        
    }
};


main (){
    employees obj;
    
    obj.readdata();
    obj.printdata();
    obj.employeesdata();
}
  


