#pragma once
#ifndef __SALARIEE_H__
#define __SALARIEE_H__

#include "employeE.h"

class SalarieE : public EmployeE
{
protected:
	int salaire_hebdomadaire;
public:
	SalarieE(std::string nom, double le_salaire);
};
#endif // __SALARIEE_H__
