#pragma once
#ifndef _syndiqueE_H_
#define _syndiqueE_H_

#include <iostream>
#include "employeE.h"

class SyndiqueE : public EmployeE
{
private:
	double salaire_horaire;
	double heures_semaine;
public:
	SyndiqueE(std::string nom, int matricule, double taux_horaire, double nbre_heures);

	double paie();
	double calculImpotsFedereaux();
	double calculImpotsProvinciaux();
	double calculPaieNette();

	void afficher();
};
#endif //_syndiqueE_H_
