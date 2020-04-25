/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <valarray>


/* 
 * File:   main.cpp
 * Author: santiago
 *
 * Created on 23 de abril de 2020, 12:19
 */
// clase  de aplicacion
#include <iostream>
#include <cstdlib>
#include"CuentasAccount.hpp"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //instaciar
    
     CuentasAccount cuentaUno("4433488-4",900000);
     cuentaUno.consing(120000);
     cuentaUno.consing(50000);
     
     
     
     CuentasAccount*cuentaDos=new CuentasAccount("1057608722-5",400000);
     
     if(cuentaUno.whithdraw(750000)){
         cout<<cuentaUno.getNumber()<<"-->retiro  exitoso"<<endl;
     }else{
         cout<<cuentaUno.getNumber()<<"-->retiro  fallido"<<endl;
     }
     
      if(cuentaUno.whithdraw(151000)){
         cout<<cuentaUno.getNumber()<<"-->retiro  exitoso"<<endl;
     }else{
         cout<<cuentaUno.getNumber()<<"-->retiro  fallido"<<endl;
         
     }
     
   if(cuentaDos->transfer(&cuentaUno,100000)){
         cout<<cuentaUno.getNumber()<<"-->transferencia  exitoso"<<endl;
     }else{
         cout<<cuentaUno.getNumber()<<"-->transferencia fallido"<<endl;
         
     }
     
     
     cout<<cuentaUno.toString()<<endl;
     cout<<cuentaDos->toString()<<end;
     
     
    
    
     delete(cuentaDos);
    return 0;
} 

