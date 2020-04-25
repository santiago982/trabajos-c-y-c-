/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CuentasAccount.hpp
 * Author: santiago
 *
 * Created on 23 de abril de 2020, 12:25
 */

#ifndef CUENTASACCOUNT_HPP
#define CUENTASACCOUNT_HPP

#include <string>

using namespace std;

class CuentasAccount {
public:
    const static double minResidue;///atributos estaticos y para  acceder
    // de  todos lados de proyecto
    
    //CuentasAccount();constructor  vacio
   CuentasAccount(string,double);//constru referencias clase  para resibir#cuenta, saldo 
   void setNumber(string);//medodo estableser # cuenta para recibir un string 
   string getNumber();
   double getResidue();
   short int getwhithdrawals();
   short int getconsignments();
   void consing(double);
   bool whithdraw(double);
   bool transfer(CuentasAccount*,double);
   string  toString();
   
    virtual ~CuentasAccount();
    private:
    string number;
    double residue;//variable  de clase
    short  int consignments;
    short int  whithdrawals;
    
    
    
    
    
    
    
    void setResidue(double);
    string  parseString(double);
};

#endif /* CUENTASACCOUNT_HPP */

