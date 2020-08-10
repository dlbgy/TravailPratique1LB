#include <iostream>

#include "employeE.h"
#include "contractuelLE.h"
#include "syndiqueE.h"
#include "ponctuelLE.h"

int main() {

	//std::string nom = "";
	int matricule = 0;
	double taux_horaire = 0;
	double nbre_heures = 0;
	int le_montant_contrat = 0;
	int les_semaines = 0;
	double le_montant = 0;
	const int max = 250; //Le nombre maximum d'employ�s de l'organisation
	int nbreEmp = 0;
	int choix = 0;
	// Tableau des employ�Es
	EmployeE* employees[max];

	EmployeE* emp1;
	EmployeE* emp2;
	EmployeE* emp3;

	printf("Bonjour et bienvenue dans le Systeme de gestion de l'Organisation.\n");


	// Choix du nombre d'employ�s que vous voulez entrer
	do
	{
		std::cout << "Entrez le nombre d'employeES que vous voulez saisir : ";
		std::cin >> nbreEmp;
		if (nbreEmp <= 0 || nbreEmp > max)
			std::cout << "ERREUR!! Vous devez saisir une valeur superieure a 0 et inferieur a 250!" << std::endl;
	} while (nbreEmp <= 0 || nbreEmp > max);

	do {
		std::cout << "1. Ajouter unE employeE syndiqueE." << std::endl;
		std::cout << "2. Ajouter unE employeE contractuelLE." << std::endl;
		std::cout << "3. Ajouter unE employeE ponctuelLE." << std::endl;
		std::cout << "4. Afficher le resultat de la paie pour les employeEs entreEs." << std::endl;
		std::cout << "5. Quitter." << std::endl;
		std::cout << "Votre choix : ";
		std::cin >> choix;

		switch (choix) {
		case 1:
			{
			std::cout << "Vous avez choisi d'ajouter unE employeE syndiqueE." << std::endl;
			std::cout << "Entrez le nom de l'employeE : ";
			std::string nom;
			std::cin >> nom;
			std::cout << "Entrez le matricule de l'employeE : ";
			std::cin >> matricule;
			std::cout << "Entrez le taux horaire de l'employeE : ";
			std::cin >> taux_horaire;
			std::cout << "Entrez le nombre d'heures travaillees par l'employeE : ";
			std::cin >> nbre_heures;
			std::cout << "L'employeE a ete ajouteE avec succes ! ";
			emp1 = new SyndiqueE(nom, matricule, taux_horaire, nbre_heures);
			employees[0] = emp1;
			}
			break;
		case 2:
			{
			std::cout << "Vous avez choisi d'ajouter unE employeE contractuelLE." << std::endl;
			std::cout << "Entrez le nom de l'employeE : ";
			std::string nom;
			std::cin >> nom;
			std::cout << "Entrez le matricule de l'employeE : ";
			std::cin >> matricule;
			std::cout << "Entrez le montant du contrat : ";
			std::cin >> le_montant_contrat;
			std::cout << "Entrez la duree du contrat en semaines : ";
			std::cin >> les_semaines;
			std::cout << "L'employeE a ete ajouteE avec succes ! ";
			emp2 = new ContractuelLE(nom, matricule, le_montant_contrat, les_semaines);
			employees[1] = emp2;
			}
			break;
		case 3:
			{
			std::cout << "Vous avez choisi d'ajouter unE employeE ponctuelLE." << std::endl;
			std::cout << "Entrez le nom de l'employeE : ";
			std::string nom;
			std::cin >> nom;
			std::cout << "Entrez le matricule de l'employeE : ";
			std::cin >> matricule;
			std::cout << "Entrez le montant total qui sera paye : ";
			std::cin >> le_montant;
			std::cout << "L'employeE a ete ajouteE avec succes ! ";
			emp3 = new PonctuelLE(nom, matricule, le_montant);
			employees[2] = emp3;
			}
			break;
		case 4:
			{
			std::cout << "Vous avez choisi d'afficher le resultat de la paie pour les employeEs entreEs." << std::endl;

			//Calcul de la paie et affichage des informations par employ�
			double montantsTotaux = 0;
			double impotsCA = 0;
			double impotsQC = 0;

			std::cout << "Voici les infos sur la paie des employees : " << std::endl;
			for (int i = 0; i < nbreEmp; i++) {
				employees[i]->afficher();
				montantsTotaux = montantsTotaux + employees[i]->paie();
				impotsCA = impotsCA + employees[i]->calculImpotsFedereaux();
				impotsQC = impotsQC + employees[i]->calculImpotsProvinciaux();
			}

			//Calcul des montants totaux et des impots CA et QC
			std::cout << std::endl;
			std::cout << "TOTAUX" << std::endl;
			std::cout << "Montants totaux verses de " << montantsTotaux;
			std::cout << "$" << std::endl;
			std::cout << "Impots a transferer CA de " << impotsCA;
			std::cout << "$" << std::endl;
			std::cout << "Impots a transfere QC de " << impotsQC;
			std::cout << "$" << std::endl;
			std::cout << std::endl;
			}
			break;
		case 5:
			{
			std::cout << "Vous avez choisi de quitter le Systeme de gestion de l'organisation." << std::endl;
			}
			break;

			delete[] employees;
		};
	}while (choix != 5);
}