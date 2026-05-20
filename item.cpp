#include "item.hpp"
#include <iostream>
Item::Item(string titulo, int ano){
    this-> titulo = titulo;
    this -> ano = ano;}
void Item::exibirInfo(){
    cout << "Titulo: " << titulo<< "Ano: " <<ano <<endl;
};