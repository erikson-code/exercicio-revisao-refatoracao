#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"
class Engenheiro : public Empregado {

  private: 
	int projetos;

  public:
  //getters

  int getProjetos();
  //setters

  void setProjetos(int projetos);
  
	
};

#endif