#include "Vendedor.hpp"
#define QTDMESES 12	  
double Vendedor::quotaTotalAnual() {
	return this->getQuotaMensalVendas() * QTDMESES;
}
	

