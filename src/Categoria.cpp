#include <iostream>
#include <string>
#include "Categoria.hpp" 

using namespace std;

Categoria::Categoria () {
    set_nome_categoria("");
    set_codigo(0);

}

Categoria::~Categoria () {
   
}

void Categoria::set_nome_categoria (string nome_categoria){
    this -> nome_categoria = nome_categoria;
}

string Categoria::get_nome_categoria (){
    return nome_categoria;
}

void Categoria::set_codigo (int codigo){
    this -> codigo = codigo;
}

int Categoria::get_codigo (){
    return codigo;
}

void Categoria::cadastrar(){

    cout << " ** CADASTRAR CATEGORIA ** " << endl;
    cout << " Nome: " << endl;
    cin >> nome_categoria;
    cout << " Código: " << endl;
    cin >> codigo;
    
}

void Categoria::alterar(){

    

    cout << " ** ALTERAR CATEGORIA ** " << endl;
    cout << " Digite o codigo da categoria que deseja alterar: " << endl;
    cin >> codigo;
    
    
}

void Categoria::pesquisar(){


    cout << " ** PESQUISAR CATEGORIA ** " << endl;
    cout << " Digite o codigo da categoria que deseja pesquisar: " << endl;
    cin >> codigo;

}

void Categoria::atualizar(){
    
    cout << " ** ATUALIZAR CATEGORIA ** " << endl;
    cout << " Digite o codigo da categoria que deseja atualizar: " << endl;
    cin >> codigo;
    
}

 void Categoria::excluir(){

    
    cout << " ** EXCLUIR CATEGORIA ** " << endl;
    cout << " Digite o codigo da categoria que deseja excluir: " << endl;
    cin >> codigo;

 }
