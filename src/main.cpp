#include <iostream>
#include "Categoria.hpp"
#include "Funcionario.hpp"
#include "Produto.hpp"
#include "Cliente.hpp"
#include "Carrinho.hpp"
#include "Pessoa.hpp"
#include <vector>
#include<bits/stdc++.h>

using namespace std;

int main () {
    vector<Cliente * >lista_cliente;
    vector<Produto * >lista_produto;
    vector<Funcionario * >lista_funcionario;
    int opcao, tamanho = lista_produto.size();
    Cliente cliente;
    Produto produto;
    Funcionario funcionario;

    while (1) {
    
        cout << " ** BEM VINDO AO MENU DE OPÇÕES ** " << endl;
        cout << "Escolha uma das opções abaixo: " << endl;
        cout << " [1] - MODO VENDA" << endl;
        cout << " [2] - MODO ESTOQUE" << endl;
        cout << " [3] - MODO RECOMENDAÇÃO" << endl;
        cout << " [0] - SAIR" << endl;
        cout << " Informe a opção desejada: " << endl;

        cin >> opcao;

        if (opcao == 0) {
            break;
        }

         switch (opcao) {

            case 1: {

                cliente.cadastrar(lista_cliente);
                break;
               }
            
    
            case 2: {
                
                funcionario.cadastrar(lista_funcionario);
                produto.cadastrar(lista_produto);
                break;

             } 

         }  
        
    //         case 3: {
    //             modo_recomendacao();
    //             break;
    //         }

    //         default: continue;

    //     }
    }
    produto.escreve_txt(lista_produto, tamanho);
}

