#include<iostream>
using namespace std;

class mother{

    public:

    void display1(){
   cout<<"Diffent for mother and daughter nature "<<endl;
    cout<<"mother is caring "<<endl;
}
    
};

class daughter :public mother { 
    public:
    
    void diaplay2(){
    	
    cout<<"daughter  is angry"<<endl;
    
    
}
};

main(){
    
    daughter obj;
    obj.display1();
    obj.diaplay2();
}

