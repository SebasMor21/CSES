#include <iostream>

class Malta
{
private:


public:
    Malta();
    ~Malta();
    void saludar();
};

Malta::Malta(/* args */){}

Malta::~Malta(){}

void Malta::saludar()
{
    std::cout<<"Hola\n";
}


int main(){

    Malta m1;

    m1.saludar();

    return 0;
}