#include <iostream>

using namespace std;

int obtener_edad(int a, int naci){
    int c = a - naci;
    return c;
}


//nombre
//apellido
//ano de nacimiento

int main()
{
    string nombre;
    string apellido;
    int naci;
    int a;
    int edad;
    cout << "digite su nombre" << endl;
    cin>>nombre;
    cout << "digite su apellido" << endl;
    cin>>apellido;
    cout << "digite su ano de nacimiento" << endl;
    cin>>naci;



    edad = obtener_edad(2018, naci);
    cout <<" nombre:"<< nombre<< endl ;
    cout <<" apellido es:"<< apellido<< endl ;
    cout <<" su edad es:"<< edad<< endl ;
    return 0;
}
