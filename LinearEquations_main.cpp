//
// Created by Zhou on 11/07/2023.
//
#include "Linear_Equations.h"
#include "LinearEquations_main.h"

// equations calculation loop
void show_linear_equations_help() {
    cout << "First of all, input the number of variable\n"
            "Then Enter expressions of matrix\n"
            "Pay attention to using floating-point numbers in matrix, terminating with CRLF\n"
            "Every Row should be put in \"{ }\"\n"
            "The whole matrix should be put in \"{ }\" as well\n"
            "Use backspace \" \" as separator, Don't use \",\" \n"
            "------------------------------------------------------------\n"
            "EXAMPLE : \n"
            "3\n"
            "{{1 2 3} {1 1 4} {5 1 4}}\n"
            "{14 15 19}\n"
            "RESULT : \n"
            "{1 2 3}\n"
            "------------------------------------------------------------\n";
}

int LinearEquations_main() {
    char ch=0;
    try{
        for(;;){
            cout << "Linear Equations Calculator.\nEnter 'h' to show help_token.\n"
                    "Use Calculator :\n"
                    "    u\n"
                    "Show help_token :\n"
                    "    h\n"
                    "Quit:\n"
                    "    q\n";
            cout<<"  > ";
            cin>>ch;
            switch (ch) {
                case 'q':
                    return 0;
                case 'h':
                    show_linear_equations_help();
                    break;
                case 'u':
                    Do_Liner_Equations();
                    return 0;
                default:
                    cerr<<"ERROR ! ( illegal inputs ) !\n"
                          "input again !\n";
                    break;
            }
        }
    }
    catch (exception&e) {
        cerr<<"ERROR !\n"<<e.what()<<endl;
    }
}
