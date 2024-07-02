
#include <iostream>
using namespace std;
class claseBase
{
private:
    /* data */
    int numero;
public:
    claseBase(int numero){
this->numero=numero;
cout<<"Constructor"<<endl;
    }
    ~claseBase(){
        cout<<"Destructor"<<endl;
    }
};

