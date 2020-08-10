#include "ponctuelLE.h"

PonctuelLE::PonctuelLE(std::string nom, int matricule, double le_montant):EmployeE(nom, matricule) {
	this->montant = le_montant;
}

double PonctuelLE::paie() {
	double paiePonctuelle = this->montant;
	return paiePonctuelle;
}

double PonctuelLE::calculImpotsFedereaux() {
	double impotsFedereaux = this->montant * tvq;
	return impotsFedereaux;
}

double PonctuelLE::calculImpotsProvinciaux() {
	double impotsProvinciaux = this->montant * tps;
	return impotsProvinciaux;
}

double PonctuelLE::calculPaieNette() {
	double paieNette = montant * (1 - (tvq + tps));
	return paieNette;
}

void PonctuelLE::afficher() {
	std::cout << getNom();
	std::cout << " " << getMatricule() << std::endl;
	std::cout << "Paie brute de ";
	std::cout << montant << "$" << std::endl;
	std::cout << "Impots CA de ";
	std::cout << calculImpotsFedereaux() << "$" << std::endl;
	std::cout << "Impots QC de ";
	std::cout << calculImpotsProvinciaux() << "$" << std::endl;
	std::cout << "Paie nette de ";
	std::cout << calculPaieNette() << "$" << std::endl;
}

