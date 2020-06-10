#include<iostream>
#include <string>
#include<vector>

#include "Pessoa.hpp"

class Funcionario: public Pessoa {
    private:

        string matricula;
        string funcao;
        float salario;

    public:

    Funcionario();
    ~ Funcionario();
    Funcionario(string nome, long int cpf, string email, string matricula, string funcao, float salario);

    void set_matricula (string matricula);
    string get_matricula ();

        
    void set_salario(float salario);
    float get_salario();

       
    void set_funcao(string funcao); 
    string get_funcao(); 

    void cadastrar(vector<Funcionario* >&lista_funcionario);
    void pesquisar();
    void atualizar();
    void excluir();

    
};

