#include<iostream>
#include <string>
#include "Pessoa.hpp" 

Pessoa::Pessoa() {
    set_nome("");
    set_cpf(0);
    set_email("");
}

Pessoa::~Pessoa() {
}

void Pessoa::set_nome (string nome) {
    this -> nome = nome; 
}


string Pessoa::get_nome() {
    return this->nome; 
}

void Pessoa::set_cpf(long int cpf) {
    this -> cpf = cpf;
}
long int Pessoa::get_cpf() {
    return this->cpf;  

}

void Pessoa::set_email(string email) {
    this -> email = email;

}

string Pessoa::get_email() {
    return this->email;
    
}


