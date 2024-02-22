#include <iostream>
using namespace std;
int main() {
    int op;
    cout << "Elija una de las opciones a ejecutar" << endl << endl;
    cout << "1. Tabla de multiplicar del 4 y del 6" << endl << endl
         << "2. Factorial de un numero seleccionado" << endl << endl
         << "3. Serie de fibonacci" << endl << endl
         << "4. Comprobar si un numero es primo" << endl << endl
         << "5. Numero par o impar" << endl << endl
         << "6. Tabla de multiplicar elegida por el usuario" << endl << endl
         << "7. Finalizar" << endl;
    cin >> op;
    switch (op) {
        case 1:{
            int numero2= 4;
            int numero3= 6;

            cout<< "Tabla de multiplicar del 4"<<endl;
            cout<< endl;
            for (int i; i <=10 ; i++) {
                cout<< "4" << "x" << i << "=" << numero2 * i <<endl;
                cout<<endl;
            }
            cout<< "Tabla de multiplicar del 6"<<endl;
            cout<< endl;
            for (int i; i <=10 ; i++) {
                cout<< "6" << "x" << i << "=" << numero3 * i <<endl;
                cout<<endl;
            }}
            break;
        case 2: {
            cout << "Ingrese un numero para calcular el factorial del mismo";
            int fac;
            double multi = 1;
            cin >> fac;
            cout << "EL resultado del factorial ingresado es:" << endl;
            for (int i = 1; i <= fac; i++) {
                multi = multi * i;
            }
            for (int i = 1; i < fac; i++) {
                cout << i  << "x";
            }
            cout << fac << "=" << multi << endl;
        }
            break;
        case 3: {
            int a =0, b=1, c,n;
            cout << "Ingrese un numero"<<endl;
            cin >> n;
            cout<< endl;
            for (int i=1; i <=n; i++) {
                cout << a << "," ;
                c = a + b;
                a = b;
                b = c;
            }
            return 0;
        }
            break;

        case 4: {
            int nprim;
            cout << "ingrese un numero del cual quiera saber si es primo o no lo es";
            cin >> nprim;
            if (nprim == 2 ) {
                cout << "este numero es primo";
            } else
            if (nprim%2 == 1 ) {
                cout << "Es un numero primo";}
            else cout << "este numero no es primo";
        }
            break;
        case 5: {
            int nprim;
            cout<< "ingrese un numero del cual quiera saber si es par o no lo es";
            cin>> nprim;
            if(nprim%2 == 0){
                cout << nprim <<"Es un numero par";}
            else{
                cout << nprim <<"es un numero impar";
            }
        }
            break;
        case 6: {
            int numeroingresado;
            cout << "Ingrese un numero para la tabla de multiplicar"<<endl;
            cin >> numeroingresado;
            cout<< endl;
            for (int i; i <=10 ; i++) {
                cout<< numeroingresado << "x" << i << "=" << numeroingresado * i <<endl;
                cout<<endl;
            }
        }
            break;
        case 7: {
            cout << "EL programa finalizo";
        }break;

    }
}

