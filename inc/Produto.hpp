#ifndef PRODUTO_HPP
#define PRODUTO_HPP
#include <iostream>
#include <string>
#include<vector>

using namespace std;

class Produto {

private:
    //atributos da classe
    string nome;
    int quantidade;
    string categoria;
    float preco;

public:

    Produto ();
    ~ Produto ();
    Produto (string nome, int quantidade, string categoria, float preco);

    void set_nome (string nome);
    string get_nome ();

    void set_quantidade (int quantidade);
    int get_quantidade ();

    void set_categoria (string categoria);
    string get_categoria ();

    void set_preco (float preco);
    float get_preco();

    void cadastrar(vector<Produto * >&lista_produto);
    void pesquisar();
    void atualizar();
    void venda();
    void escreve_txt(vector<Produto * >lista_produto, int tamanho);
    
    


    
};

#endif