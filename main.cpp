#include <iostream>

using namespace std;

struct node{
	int valor;
	node *esquerda;
	node *direita;
};

class Arvore_binaria
{
private:

    node *cabeca;
    
public:
    Arvore_binaria();
    ~Arvore_binaria();

    void inserir(int chave);
    void remover(int chave);
    node *buscar(int key);
    void deletar_arvore();

};

Arvore_binaria::Arvore_binaria()
{
    this->cabeca = NULL;
}

Arvore_binaria::~Arvore_binaria()
{
    this->deletar_arvore();
}



int main(int argc, char const *argv[])
{
    cout << "Projeto EDB2 - Arvores";
    return 0;
}
