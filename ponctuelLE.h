#pragma once
#ifndef _PONCTUELLE_H_
#define _PONCTUELLE_H_

#include<iostream>
#include "employeE.h"

class PonctuelLE : public EmployeE
{
protected:
	double montant;
public:
	PonctuelLE(std::string nom, int matricule, double le_montant);

	double paie();
	double calculImpotsFedereaux();
	double calculImpotsProvinciaux();
	double calculPaieNette();

	void afficher();
};
#endif // _PONCTUELLE_H_
