#ifndef CATEGORIA_HPP
#define CATEGORIA_HPP
#include <iostream>
#include <string>

using namespace std;

class Categoria {

private:

    string nome_categoria;
    int codigo;

public:

    Categoria ();
    ~Categoria ();

    void set_nome_categoria (string nome_categoria);
    string get_nome_categoria ();

    void set_codigo (int codigo);
    int get_codigo (); 

    void cadastrar();
    void alterar();
    void pesquisar();
    void atualizar();
    void excluir();


};

#endif