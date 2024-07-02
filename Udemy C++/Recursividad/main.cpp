#include <iostream>

using namespace std;

void funcionA(char letra);
void funcionB(char letra);

void funcionA(char letra)
{
    if (letra > 'A')
    {
        funcionB(letra);
    }

    cout << letra << " " << endl;
}

void funcionB(char letra)
{
    funcionA(--letra);
}
int main(int argc, char const *argv[])
{
    /* code */
    funcionA('Z');
    return 0;
}
