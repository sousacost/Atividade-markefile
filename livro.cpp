#include "Livro.hpp"
#include <iostream>
Livro::Livro(string titulo, int ano, string autor)
: Item(titulo, ano) {
this->autor = autor;}
void Livro::exibirInfo() {
cout << "Livro: " << titulo 
 << " | Ano: " << ano 
 << " | Autor: " << autor << endl;}