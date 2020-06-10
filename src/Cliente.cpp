#include <bits/stdc++.h>
#include "Cliente.hpp"
#include "Pessoa.hpp"
#include <vector>

using namespace std;


Cliente::Cliente (){

    set_socio("");

    cout << "Método Construtor da Classe Cliente" << endl;

}

Cliente::Cliente (string nome, string email, long int cpf,string socio){

    set_nome(nome);
    set_email(email);
    set_cpf(cpf);
    set_socio(socio);
}


Cliente::~Cliente(){

    cout << "Método Destrutor da Classe Categoria" << endl;

}

void Cliente::set_socio (string socio) {
    this -> socio = socio;
}

string Cliente::get_socio () {
    return this-> socio;

}

void Cliente::cadastrar(vector<Cliente * >&lista_cliente){


    string nome;
    long int cpf;
    string email;
    string socio;
    
    ofstream fout;
    fout.open("doc/nome_clientes.txt", ofstream::app);
    cout << " ** CADASTRAR CLIENTES ** " << endl;
    cout << " Nome: " << endl;
    cin.ignore();
    getline(cin, nome);
    cout << " CPF: " << endl;
    cin >> cpf;
    cout << " Email: " <<  endl;
    cin.ignore();
    getline(cin, email);
    cout << " É cliente sócio? (Sim/Nao): " << endl;
    scanf(" %s", socio);

    fout << nome << endl;
    fout << cpf << endl;
    fout << email << endl;
    fout << socio << endl;
    Cliente * c1= new Cliente(nome,email,cpf,socio);
    lista_cliente.push_back(c1);


}

void Cliente::pesquisar(){

    long int cpf = get_cpf();

    cout << " ** PESQUISAR CLIENTE ** " << endl;
    cout << " Digite o cpf do cliente que deseja pesquisar: " << endl;
    cin >> cpf;

}

void Cliente::atualizar(){

    long int cpf = get_cpf();

    cout << " ** ATUALIZAR CLIENTE ** " << endl;
    cout << " Digite o cpf do cliente que deseja atualizar: " << endl;
    cin >> cpf;
    
}

 void Cliente::excluir(){

    long int cpf = get_cpf();

    cout << " ** EXCLUIR CLIENTE ** " << endl;
    cout << " Digite o cpf do cliente que deseja excluir: " << endl;
    cin >> cpf;

 }

 
 