
#ifndef PESSOA_HPP
#define PESSOA_HPP
#include <string>
#include <iostream>

using namespace std;


class Pessoa {

   
    private:
        string nome;
        long int cpf;
        string email;
    public:

        Pessoa();
        ~ Pessoa();

        void set_nome (string nome);
        string get_nome ();

        void set_cpf (long int cpf);
        long int get_cpf ();

        void set_email (string email);
        string get_email ();

        void cadastrar();
};

#endif

