#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    int getNumber(){
        cout<<"Enter the number: ";
        ci>> num;
    }
    
};


class Square : public Number {
public:
    int getSquare(){
        int num, sqr;
        
        sqr = num * num;
        
    }
    
    
};


class Cube : public Number {

public:
    int getCube()
    {
        int num, cube;
        
        cube = num * num * num;
        
    }
};

int main()
{
    Square objS;
    Cube objC;
    int sqr, cube;

    objS.getNumber();
    sqr = objS.getSquare();
    cout << "Square of"<<sqr<< endl;

    objC.getNumber();
    cube = objC.getCube();
    cout << "Cube of"<<cube<< endl;

    return 0;
}
