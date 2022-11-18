#include<iostream>
using namespace std;

class A{
    public:
    
    int id;
    char name[100];
    char role[50];
    int salary;
    int experiance;
    char comp_name[80];
    char address[100];
    char email[60];
    int contact_no;
    
    
    
    void setdata1 (){
        
        cout<<"enter the id:";
        cin>>id;
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter the role:";
        cin>>role;
        
        
    }
    
};

class B :public A{
    
    
    public:
    
    void setdata2(){
        
        cout<<"enter the salary:";
        cin>>salary;
        cout<<"enter the experiance:";
        cin>>experiance;
        
        
        
    }
    
};

class c:public B{
    
    
    public:
    
    
    void setdata3(){
        
        cout<<"enter the comp_name:";
        cin>>comp_name;
        cout<<"enter the address:";
        cin>>address;
    }
        
        void getdata1 (){
            
            cout<<"name:"<<name;
            cout<<"role:"<<role;
            cout<<"salary:"<<salary;
            
            
            
        
    }
    
};
        
  class D:public c{
      public:
      
      void setdata4(){
          setdata1();
          setdata2();
          setdata3();
          
          cout<<"enter the email:";
          cin>>email;
          cout<<"enter the contact_no:";
          cin>>contact_no;
          
      }
      
      void getdata2(){
          
          cout<<"id:"<<id<<endl;
          cout<<"name :"<<name<<endl;
          cout<<"role :"<<role<<endl;
          cout<<"salary :"<<salary<<endl;
          cout<<"experiance:"<<experiance<<endl;
          cout<<"comp_name:"<<comp_name<<endl;
          cout<<"address:"<<address<<endl;
          cout<<"email:"<<email<<endl;
          cout<<"contact_no:"<<contact_no<<endl;
          
          }
          
           
};

        
  main(){
      
       D obj;
      obj.setdata4();
      obj.getdata2();
      
     
     
  }
   
