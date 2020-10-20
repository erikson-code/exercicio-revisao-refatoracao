#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

#define HORASDIARIAS 8
#define PORCENTAGEMHORAEXTRA 0.5

class Empregado {
      
  private:
  std::string nome; 
  double quotaMensalVendas;  
  double salarioHora; 

  //functions

   double horasExtras(double horasTrabalhadas);
   double salarioExtra(double x);
   double salarioTotal(double t,double salarioHora);

   public:
        
   //getters

   std::string getNome();

   double getSalarioHora();

  double getQuotaMensalVendas();

   //setters

   void setQuotaMensalVendas(double quotaMensalVendas);
   void setNome(std::string nome);
   void setSalarioHora(double salarioHora);

        //functions

   double pagamentoMes(double horasTrabalhadas);
        
    };
    
#endif