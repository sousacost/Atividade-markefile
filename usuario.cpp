#include "Usuario.hpp"
#include <iostream>
void Usuario::adicionarItem(Item* item) {
 itens.push_back(item);}
void Usuario::listarItens() {
 for (Item* item : itens) {
    item->exibirInfo();}}