#ifndef USUARIO_HPP
#define USUARIO_HPP
#include <vector>
#include "Item.hpp"
using namespace std;
class Usuario {
private:
vector<Item*> itens;
public:
void adicionarItem(Item* item);
void listarItens();
};
#endif