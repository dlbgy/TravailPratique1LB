#pragma once
#ifndef __CONTRACTUELLE_H__
#define __CONTRACTUELLE_H__

#include <iostream>
#include "employeE.h"

class ContractuelLE : public EmployeE
{
protected:
    double montant_contrat;
    double semaines;
public:
    ContractuelLE(std::string nom, int matricule, int le_montant_contrat, int duree_semaines);

    double paie();
    double calculImpotsFedereaux();
    double calculImpotsProvinciaux();
    double calculPaieNette();

    void afficher();
};
#endif // __CONTRACTUELLE_H__
