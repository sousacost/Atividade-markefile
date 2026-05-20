#ifndef ITEM.HPP
#define ITEM.HPP
#include <string>
using namespace std;
class Item{
protected:
string titulo;
int ano;
public:
Item(string titulo, int ano);
virtual void exibirInfo();};
#endif