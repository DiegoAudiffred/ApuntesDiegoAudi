#include <iostream>
using namespace std;

template <typename T1, typename T2>

class claset
{
private:
    T1 dato1;
    T2 dato2;

public:
    claset(T1 dato1, T2 dato2)
    {
        this->dato1 = dato1;
        this->dato2 = dato2;
    }

    void setDato(int a);

    T1 getValue1()
    {
        return dato1;
    }

    T2 getValue2()
    {
        return dato2;
    }

    void mostrar()
    {
        cout << dato2 << dato1 << endl;
    }
};

template <typename T1, typename T2>
void claset<T1, T2>::setDato(int a)
{
    cout << "Si jalo" << endl;
}