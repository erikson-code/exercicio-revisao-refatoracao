#include "Empregado.hpp"
    //getters

    std::string Empregado::getNome(){

      return this->nome;
    }

    double Empregado::getSalarioHora(){

      return this->salarioHora;
    }

    double Empregado::getQuotaMensalVendas(){

      return this->quotaMensalVendas;
    }

    //setters

    void Empregado::setQuotaMensalVendas(double quotaMensalVendas){

        this->quotaMensalVendas = quotaMensalVendas;

    }
    void Empregado::setNome(std::string nome){

        this->nome = nome;

    }
    void Empregado::setSalarioHora(double salarioHora){

      this->salarioHora = salarioHora;
    }

    //functions

    double Empregado::pagamentoMes(double horasTrabalhadas) {
 
    double t = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > HORASDIARIAS) {
        double x = horasExtras(horasTrabalhadas);
        t += salarioExtra(x);
      }
	  return salarioTotal(t,salarioHora);
    }

    double Empregado::horasExtras(double horasTrabalhadas){
      return (horasTrabalhadas - HORASDIARIAS);
    }
    double Empregado::salarioExtra(double x){
      return x * PORCENTAGEMHORAEXTRA;
    }
    
    double Empregado::salarioTotal(double t,double salarioHora){
        return (t * salarioHora);
    }