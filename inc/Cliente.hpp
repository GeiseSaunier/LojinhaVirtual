#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include "Pessoa.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Cliente: public Pessoa {

    private:

     string socio;
    

    public:

    Cliente();
    ~ Cliente();
    Cliente (string nome, string email, long int cpf, string socio);


    void set_socio (string socio);
    string get_socio ();

    void cadastrar(vector<Cliente * >&lista_cliente);
    void pesquisar();
    void atualizar();
    void excluir();
    
    };

    #endif