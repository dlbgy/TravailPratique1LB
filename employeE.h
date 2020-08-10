#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

#pragma once
#include <iostream>
#include <string>

class EmployeE {
  private:
      std::string nom;
      int matricule;
      //const float tvq = 0.15;
      //const float tps = 0.15;
  public:
      virtual ~EmployeE();
      const double tvq = 0.15;
      const double tps = 0.15;

      EmployeE(std::string le_nom, int le_matricule);
      
      std::string getNom();
      int getMatricule();

      //virtual double calculPaiePonctuelle();
      virtual double paie();
      virtual double calculImpotsFedereaux();
      virtual double calculImpotsProvinciaux();
      virtual double calculPaieNette();
      virtual void afficher();
};

#endif // __EMPLOYEE_H__
