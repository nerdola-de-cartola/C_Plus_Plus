#pragma once
#include <string>
#include <iostream>

class Conta {
   private:
      std::string numero;
      std::string cpf;
      std::string nome;
      float saldo;

   public:
      Conta(std::string numero, std::string cpf, std::string nome);
      void sacar(float valor_a_sacar);
      void depositar(float valor_a_depositar);
      std::string recuperaNumero();
      std::string recuperaCpf();
      std::string recuperaNome();
      float recuperaSaldo();
      void defineNumero(std::string numero);
      void defineCpf(std::string cpf);
      void defineNome(std::string nome);
};