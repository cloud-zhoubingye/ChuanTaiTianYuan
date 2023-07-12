//
// Created by Zhou on 11/07/2023.
//
#include "Least_Square.h"
#include "LeastSquare_main.h"

void least_square(){
    cout<<"Enter the dimension of the least squares fit curve :\n"
        <<"Unfortunately, we only support one-dimensional linear fitting and two-dimensional conic fitting for the time being！\n"
        <<"Please enter 1 or 2 !\n  > ";
    int dimension=0;
    cin>>dimension;
    if(!cin) error("dimension input illegally !\n");
    switch (dimension) {
        case 1:
            linear();
            break;
        case 2:
            quadratic();
            break;
        default:
            error("dimension range illegally !\n");
            break;
    }
}

void show_least_square_help(){
    cout<<"An example :\n"
          "Enter the dimension of the least squares fit curve :\n"
          "Unfortunately, we only support one-dimensional linear fitting and two-dimensional conic fitting for the time being！\n"
          "Please enter 1 or 2 !\n"
          "  > 2\n"
          "Input three points on the curve !\n"
          "for example: 1.2 3 4.1 7.6 8.6 7.1\n"
          "  > 1 3 2 7 3 13\n"
          "Get it!\n"
          "{\n"
          "{  1  1  1 }\n"
          "{  4  2  1 }\n"
          "{  9  3  1 }\n"
          "}\n{  3  7  13 }\n"
          "The least square method for the coefficient matrix of quadratic curve is : \n"
          "{  1  1  1 }\n"
          "The curve is :\n"
          "y = 1*x^2 + 1*x + 1\n";
}

int LeastSquare_main(){
    char ch=0;
    try{
        cout<<"Least Square Fitting.\n"
              "Welcome !\n"
              "Type \"h\" to get help information.\n"
              "Type \"q\" to quit this programme.\n"
              "Type \"u\" to use key functions.\n"
              "  > ";
        cin>>ch;
        if (!cin) error("input error!");
        switch (ch) {
            case 'h':
                show_least_square_help();
                break;
            case 'q':
                return 0;
            case 'u':
                least_square();
                return 0;
            default:
                error("illegal command !");
        }
    }
    catch (exception&e) {
        cerr<<"ERROR !\n"<<e.what()<<endl<<"Input again !\n";
    }
}
