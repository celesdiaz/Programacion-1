//ingresar 2 num por teclado y que luego calcule y emita la suma de ambos y la resta del 
//segundo menos el primero.
//Se deben mostrar ambos resultados por pantalla

#include<iostream>
int main(){

    int num1, num2, suma, resta;

std::cout<< "ingrese un numero";
std::cin>> num1;

std::cout<<"ingrese otro numero";
std::cin>>num2;

suma = num1 + num2;
std::cout<< "La suma de ambos numeros es ";
std::cout<<suma;
resta = num2 - num1;
std::cout<< "La resta del segundo menos el primero es ";
std::cout<<resta;
//std::cin.get(); el de abajo es una version mejorada para que no se cierre el programa
system("pause");
return 0;
}
