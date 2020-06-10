
#include "Produto.hpp"
#include <bits/stdc++.h>


Produto::Produto (){
    set_nome(" ");
    set_quantidade(0);
    set_categoria(" ");
    set_preco(0);

    cout << "Construtor da Classe Produto" << endl;

}

Produto::Produto (string nome, int quantidade, string categoria, float preco){

    set_nome(nome);
    set_quantidade(quantidade);
    set_categoria(categoria);
    set_preco(preco);


}

Produto::~Produto (){
    cout << "Destrutor da Classe Produto" << endl;

}

void Produto::set_nome (string nome){
    this-> nome = nome;
}

string Produto::get_nome (){
    return this->nome;
}

void Produto::set_quantidade (int quantidade){
    this-> quantidade = quantidade;
}
int Produto::get_quantidade (){
    return this->quantidade;
}

void Produto::set_categoria ( string categoria){
    this-> categoria = categoria;
}

string Produto::get_categoria (){
    return this->categoria;
}


float Produto::get_preco (){
    return this->preco;
}
void Produto::set_preco (float preco ){
    this->preco = preco;
}


void Produto::cadastrar(vector<Produto * >&lista_produto){
    cout << " ** CADASTRAR PRODUTO ** " << endl;
    cout << " Nome do produto: " << endl;
    getline(cin, nome);
    cout << " Quantidade: " << endl;
    cin >> quantidade;
    cout << " Categoria:" << endl;
    getline(cin, categoria);   
    cout << " Preco: " << endl;
    cin >> preco;

    Produto * p1= new Produto(nome,quantidade,categoria, preco);
    lista_produto.push_back(p1);

 }

void Produto::pesquisar(){
    cout << " ** PESQUISAR PRODUTO ** " << endl;
    cout << " Digite o nome do produto que deseja pesquisar: " << endl;
    cin >> nome;

}

void Produto::atualizar(){
    cout << " ** ATUALIZAR PRODUTO ** " << endl;
    cout << " Digite o nome do produto que deseja atualizar: " << endl;
    cin >> nome;
    
}

 void Produto::escreve_txt(vector<Produto * >lista_produto, int tamanho){
     std::fstream prod;
     prod.open("doc/Lista_produtos.txt", ios::app);
     int produto = lista_produto.size();

     for (int i = tamanho; i < produto; i++ ){
         prod << lista_produto[i] -> get_nome() << endl;
         prod << lista_produto[i] -> get_quantidade() << endl;
         prod << lista_produto[i] -> get_categoria() << endl;
         prod << lista_produto[i] -> get_preco() << endl;
     }

 }


