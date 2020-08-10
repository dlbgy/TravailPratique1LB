#include "salarieE.h"

SalarieE::SalarieE(std::string nom, double le_salaire):EmployeE(nom) {
	this->salaire_hebdomadaire = le_salaire;
}
