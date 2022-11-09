#include "Conta.hpp"

Conta::Conta(std::string numero, std::string cpf, std::string nome):
   numero(numero),
   cpf(cpf),
   nome(nome)
{}

void Conta::sacar(float valor_a_sacar) {
   if(valor_a_sacar < 0) {
      std::cout << "Não pode sacar valor negativo" << std::endl;
      return;
   }
   
   if(valor_a_sacar > this->saldo) {
      std::cout << "Saldo insuficiente" << std::endl;
      return;
   }
   
   this->saldo -= valor_a_sacar;
}

void Conta::depositar(float valor_a_depositar) {
   if (valor_a_depositar < 0) {
      std::cout << "Não pode sacar valor negativo" << std::endl;
      return;
   }

   this->saldo += valor_a_depositar;
}

float Conta::recuperaSaldo() {
   return this->saldo;
}

std::string Conta::recuperaNumero() {
   return this->numero;
}

std::string Conta::recuperaCpf() {
   return this->cpf;
}

std::string Conta::recuperaNome() {
   return this->nome;
}

void Conta::defineNumero(std::string numero) {
   this->numero = numero;
}

void Conta::defineCpf(std::string cpf) {
   this->cpf = cpf;
}

void Conta::defineNome(std::string nome) {
   this->nome = nome;
}
