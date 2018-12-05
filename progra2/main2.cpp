#include <iostream>

using namespace std;
void metodo1(){
    cout<<"el mensaje del metodo 1 imprime "<< endl;
}
string metodo2(){
    return "mensaje";
}
int main()
{

    metodo1();
    string valor = metodo2();
    cout << valor << endl;
    metodo2();
    // string valor = metodo2();
    // cout << valor << endl ;
    return 0;
}
