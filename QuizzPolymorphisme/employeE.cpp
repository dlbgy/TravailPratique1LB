#include "employeE.h"

EmployeE::EmployeE(std::string le_nom, int le_matricule){
	this->nom = le_nom;
	this->matricule = le_matricule;
}
EmployeE::~EmployeE() {}

std::string EmployeE::getNom() {
	return this->nom;
}
int EmployeE::getMatricule() {
	return this->matricule;
}

//double EmployeE::calculPaiePonctuelle()
//{
//	return 0.0;
//}

double EmployeE::paie()
{
	return 0.0;
}

double EmployeE::calculImpotsFedereaux()
{
	return 0.0;
}

double EmployeE::calculImpotsProvinciaux()
{
	return 0.0;
}

double EmployeE::calculPaieNette()
{
	return 0.0;
}

void EmployeE::afficher()
{
}
