#include "contractuelLE.h"

ContractuelLE::ContractuelLE(std::string nom, int matricule, int le_montant_contrat, int les_semaines) :EmployeE(nom, matricule) {
	this->montant_contrat = le_montant_contrat;
	this->semaines = les_semaines;
}

double ContractuelLE::paie() {
	double salaire = this->montant_contrat / this->semaines;
	return salaire;
}
double ContractuelLE::calculImpotsFedereaux()
{
	double impotsFedereaux = (this->montant_contrat / this->semaines) * tvq;
	return impotsFedereaux;
}
double ContractuelLE::calculImpotsProvinciaux()
{
	double paieNette = (this->montant_contrat / this->semaines) * tps;
	return paieNette;
}

double ContractuelLE::calculPaieNette() {
	double paieNette = (this->montant_contrat / this->semaines) * (1 - (tvq+tps));
	return paieNette;
}

void ContractuelLE::afficher() {
	std::cout << getNom();
	std::cout << " " << getMatricule() << std::endl;
	std::cout << "Paie brute de ";
	std::cout << paie() << "$" << std::endl;
	std::cout << "Impots CA de ";
	std::cout << calculImpotsFedereaux() << "$" << std::endl;
	std::cout << "Impots QC de ";
	std::cout << calculImpotsProvinciaux() << "$" << std::endl;
	std::cout << "Paie nette de ";
	std::cout << calculPaieNette() << "$" << std::endl;
}
