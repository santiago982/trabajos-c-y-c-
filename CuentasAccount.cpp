/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CuentasAccount.cpp
 * Author: santiago
 * 
 * Created on 23 de abril de 2020, 12:25
 */
//implementacion  clases

#include "sstream"
#include "CuentasAccount.hpp"
#include <iostream>

const double CuentasAccount::minResidue=50000;

CuentasAccount::CuentasAccount(string  number,double residue) {
    setNumber(number);
    setResidue(residue);
    this->consignments=0;
    this->whithdrawals=0;
}
void CuentasAccount::setNumber(string number){
  //  this->number=number;
   CuentasAccount::number = number;
}

void  CuentasAccount::setResidue(double residue){

    CuentasAccount::residue = residue;
}


string CuentasAccount::getNumber(){
    return this->number;
}


double CuentasAccount::getResidue(){
    return this->residue;
    
}
short  int CuentasAccount::getconsignments(){
    return this->consignments;
    
}


short  int CuentasAccount::getwhithdrawals(){
    return this->getwhithdrawals();
}

void  CuentasAccount::consing(double  value){
    setResidue(getResidue()+ value);
    consignments++;
}

bool  CuentasAccount::whithdraw(double value){
    if(value<= getResidue()-minResidue){
        setResidue(getResidue()-value);
        return true;
    }
    
    return  false;
}


bool CuentasAccount::transfer(CuentasAccount*account,double value){

    if(whithdraw(value)){
    account->consing(value);
    
    return true;
    }
    
    return false;
}


string CuentasAccount::parseString(double value){

    ostringstream aux;
    aux<<value;
    
    return aux.str();
    
    
}
string CuentasAccount::toString(){
return"CuentasAccount[number="+number+",residue"+parseString(residue)+
       ",consignnments"+parseString(consignments) + "whithdrawals"+ parseString(whithdrawals)+"]";
}



CuentasAccount::~CuentasAccount() {
    
    
    std::cout<<"bye-->"<<number<<endl;
}

//Ciborg