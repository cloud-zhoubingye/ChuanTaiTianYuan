//
// Created by Zhou on 11/07/2023.
//
#include "ComposedCalculator_main.h"
#include "LeastSquare_main.h"
#include "LinearEquations_main.h"
#include "SimplexMethod_main.h"
#include "std_lib_facilities.h"
int main(){


    while(true){
        cout<<"\nWelcome !\n"
              "Version 2.0                                ----- Updated on 2023/7/12\n"
              "Version 1.0 log :\n"
              "     The functions of linear equations, complex parenthesized mixed operation expression and low order least squares curve fitting are provided.\n"
              "                                                                     2023/7/11  16:15"
              "Version 2.0 log :\n"
              "     The simple method for solving linear programming is added, which must be reduced to normal form first.\n"
              "                                                                     2023/7/12  10:30"
              "\n\n-------------------------------------------------------------------------------------\n\n"
              "Type \"ComposedCalculator\" to use composed calculator !\n"
              "Type \"LeastSquare\" to use least square fitting function !\n"
              "Type \"LinearEquations\" to use linear equations solver !\n"
              "Type \"SimplexMethod\" to use simplex method of solving linear project !\n"
              "Type \"Quit\" to quit_token from this programme !\n"
              "  > ";
        string s;
        cin>>s;
        if (s=="ComposedCalculator")
            ComposedCalculator_main();
        else if(s=="LeastSquare")
            LeastSquare_main();
        else if (s=="LinearEquations")
            LinearEquations_main();
        else if(s=="SimplexMethod")
            SimplexMethods_main();
        else if(s=="Quit"){
            cout<<"Thanks for using!\n";
            return 0;
        }
        else
            cerr<<"ERROR !\nillegal input !\n";
    }
}