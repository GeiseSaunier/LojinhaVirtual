
#include<iostream>
#include "Funcionario.hpp"
#include <string>
#include<vector>


Funcionario::Funcionario () {

    set_matricula("");
    set_funcao("");
    set_salario(0);

}

Funcionario::Funcionario (string nome, long int cpf, string email, string matricula, string funcao, float salario){
    set_nome(nome);
    set_cpf(cpf);
    set_email(email);
    set_matricula(matricula);
    set_funcao(funcao);
    set_salario(salario);
}

Funcionario::~Funcionario () {

}

void Funcionario::set_matricula (string matricula){
    this-> matricula = matricula;
}

string Funcionario:: get_matricula (){
    return this->matricula;
}

void Funcionario::set_funcao (string funcao){
    this-> funcao = funcao;

}

string Funcionario::get_funcao (){
    return this->funcao;
}

void Funcionario::set_salario ( float salario){
    this -> salario = salario;
}

float Funcionario::get_salario (){
    return this-> salario;
}

void Funcionario::cadastrar(vector<Funcionario * >&lista_funcionario){

    string nome;
    long int cpf;
    string email;
    string matricula;
    string funcao;
    float salario;

    cout << " ** FUNCIONÁRIOS ** " << endl;
    cout << " Nome: " << endl;
    cin.ignore();
    getline(cin, nome);
    cout << " CPF: " << endl;
    cin >> cpf;
    cout << " Email: " << endl;
    cin.ignore();
    getline(cin, email);
    cout << " Matrícula: " << endl;
    cin.ignore();
    getline(cin, matricula);
    cout << "Função: " << endl;
    cin.ignore();
    getline(cin, funcao);
    cout << "Salário: " << endl;
    cin >> salario;

    Funcionario * f1= new Funcionario(nome,cpf, email, matricula, funcao, salario);
    lista_funcionario.push_back(f1);


}

void Funcionario::pesquisar(){

    long int cpf = get_cpf();

    cout << " ** PESQUISAR FUNCIONÁRIO ** " << endl;
    cout << " Digite o cpf do funcionário que deseja pesquisar: " << endl;
    cin >> cpf;

}

void Funcionario::atualizar(){

    long int cpf = get_cpf();
    
    cout << " ** ATUALIZAR FUNCIONÁRIO ** " << endl;
    cout << " Digite o cpf do funcionário que deseja atualizar: " << endl;
    cin >> cpf;
    
}

void Funcionario::excluir(){

     long int cpf = get_cpf();
    
    cout << " ** EXCLUIR FUNCIONÁRIO ** " << endl;
    cout << " Digite o cpf do funcionário que deseja excluir: " << endl;
    cin >> cpf;

 }
