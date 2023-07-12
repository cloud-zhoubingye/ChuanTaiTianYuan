//
// Created by Zhou on 11/07/2023.
//

#include "Least_Square.h"

void quadratic_least_square(my_matrix A, my_vector b){
    my_vector w=classical_gaussian_elimination(A,b);
    cout<<"The least square method for the coefficient matrix of quadratic curve is : \n"
    <<w<<endl;
    cout<<"The curve is :\n"
    <<"y = "<<w(0)<<"*x^2 + "<<w(1)<<"*x + "<<w(2)<<endl;
}

void linear_least_square(my_matrix A, my_vector b){
    my_vector w=classical_gaussian_elimination(A,b);
    cout<<"The least square method for the coefficient matrix of linear curve is : \n"
        <<w<<endl;
    cout<<"The curve is :\n"
        <<"y = "<<w(0)<<"*x + "<<w(1)<<endl;
}

void linear(){
    //input two data point
    pair<double,double>point1,point2;
    cout<<"Input two points on the curve !\n"
    <<"for example: 1.2 3 4.1 7.6\n  > ";
    cin>>point1.first>>point1.second>>point2.first>>point2.second;
    //convert into WanderMonde matrix
    stringstream ss{""};
    ss<<"{ { "<<point1.first<<' '<<1<<" } { "<<point2.first<<' '<<1<<" } } \n";
    ss<<"{ "<<point1.second<<' '<<point2.second<<" }";
    my_matrix A(2,2);
    my_vector b(2);
    ss>>A>>b;
    cout<<"Get it!\n"<<A<<endl<<b<<endl;
    //fit the curve
    linear_least_square(A,b);
}

void quadratic(){
    //input three data point
    pair<double,double>point1,point2,point3;
    cout<<"Input three points on the curve !\n"
        <<"for example: 1.2 3 4.1 7.6 8.6 7.1\n  > ";
    cin>>point1.first>>point1.second>>point2.first>>point2.second>>point3.first>>point3.second;
    //convert into WanderMonde matrix
    stringstream ss{""};
    ss<<"{ { "<<pow(point1.first,2)<<' '<<point1.first<<' '<<1<<" } { "
    <<pow(point2.first,2)<<' '<<point2.first<<' '<<1<<" } { "
    <<pow(point3.first,2)<<' '<<point3.first<<' '<<1<<" } }\n";
    ss<<"{ "<<point1.second<<' '<<point2.second<<' '<<point3.second<<" }";
    my_matrix A(3,3);
    my_vector b(3);
    ss>>A>>b;
    cout<<"Get it!\n"<<A<<endl<<b<<endl;
    //fit the curve
    quadratic_least_square(A,b);
}

