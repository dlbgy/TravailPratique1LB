#include "syndiqueE.h"

SyndiqueE::SyndiqueE(std::string nom, int matricule, double taux_horaire, double nbre_heures) :EmployeE(nom, matricule) {
	this->salaire_horaire = taux_horaire;
	this->heures_semaine = nbre_heures;
}

double SyndiqueE::paie() {
	double salaireHebdo = this->heures_semaine * this->salaire_horaire;
	return salaireHebdo;
}

double SyndiqueE::calculImpotsFedereaux() {
	double ImpotsFedereaux = (this->heures_semaine * this->salaire_horaire) * tvq;//salaire_hebdomadaire()*tvq
	return ImpotsFedereaux;
}

double SyndiqueE::calculImpotsProvinciaux() {
	double ImpotsProvinciaux = (this->heures_semaine * this->salaire_horaire) * tps;//salaire_hebdomadaire()*tps
	return ImpotsProvinciaux;
}

double SyndiqueE::calculPaieNette() {
	double calculPaieNette = paie() - calculImpotsFedereaux() - calculImpotsProvinciaux();
	return calculPaieNette;
}

void SyndiqueE::afficher() {
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
};
