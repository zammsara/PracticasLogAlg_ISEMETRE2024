/* Mostrar los primeros 300 numero pares*/
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i = 0, cont = 0;
    while (cont < 300)
    {
        i++;
        if (i %2 == 0)
        {
            cont ++;
            cout << cont << " " << i << endl;
        }
        
    }
    
    return 0;
}
