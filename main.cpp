#include "Livro.hpp"
#include "Usuario.hpp"
int main() {
    Livro l1("C++ Basico", 2020, "Joao");
    Livro* l2 = new Livro("POO Avancado", 2022, "Maria");
    Usuario u;
    u.adicionarItem(&l1);
    u.adicionarItem(l2);
    u.listarItens();
    delete l2;
    return 0;}