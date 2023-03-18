//Factorial
#include <iostream>
using namespace std;
int main()
{
    int n,i;
    int factorial;
    cout << "Introduce un numero: ";
    cin >> n;
    factorial=1;
    for(i=1;i<=n;i++)
        factorial = factorial * i;
    cout << endl << "Factorial de " << n << " -> " << factorial << endl;
    system("pause");

}

//Fibonacci
 #include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int numero,fibo1,fibo2,i;
   do
   {
         cout << "Introduce numero mayor que 1: ";
         cin >> numero;
   }while(numero<=1);
   cout << endl;
    cout << "Los " << numero << " primeros numeros de la serie de Fibonacci son:" << endl;
   fibo1=1;
   fibo2=1;
   cout << fibo1 << " ";
   for(i=2;i<=numero;i++)
   {
       cout << fibo2 << " ";
       fibo2 = fibo1 + fibo2;
       fibo1 = fibo2 - fibo1;
   }
   cout << endl << endl;
    system("pause");
}

//NumeroPrimo
#include<iostream>

using namespace std;

int main()

{
    int i,n,c = 0;
    cout<<"Ingresa un numero: ";
    cin>>n;
    for (i = 1; i <= n; i++){
        if (n % i == 0){
            c++;
        }
    }
    if (c == 2){
        cout<<"El numero " <<n<< " es primo";
    }
    else{
        cout<< "El numero " <<n<<  "no es primo" ;
    }
    return 0;

}
//NumeroPar
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{

    int numero;
    system("cls");

    cout << "Introduce numero: ";
    cin >> numero;

    if(numero % 2 == 0)
        cout << endl << numero <<" es par\n";
    else
        cout << endl << numero <<" es impar\n";

    system("pause");
}
//tabla de multiplicar
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int numero;
    do{
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;

    }while((numero<1) || (numero>10));

    for(int i=1; i<=10; i++){
        cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
    }
    return 0;
}