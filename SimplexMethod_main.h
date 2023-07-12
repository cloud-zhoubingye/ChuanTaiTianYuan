//
// Created by Zhou on 12/07/2023.
//


#ifndef MYPROJECT_SIMPLEXMETHOD_MAIN_H
#define MYPROJECT_SIMPLEXMETHOD_MAIN_H
#include<iostream>
#include<iomanip>
#include "std_lib_facilities.h"
class Simplex
{
private:
    int m, n;       //m为自变量个数，n为约束方程个数
    int In_Index, Out_Index;      //In_Index为入基变量下标，Out_Index为出基变量下标
    double** A;     //A为系数矩阵
    int* Basic_Variable;        //基变量数组，存储基变量下标
    double* B;      //B为每个约束方程的常数
    double* C;      //C为目标函数的系数
    double* θ;      //θ为决定入基变量的变量
    double* η;      //η为检验数数组
    double Result;     //最终结果
    void InitNums();
    bool Check_Optimum();
    int Get_In_Variable();
    int Get_Out_Variable();
    void Update_Vectors();
public:
    void GetNums();
    void Init_Basic_Variable();
    void Print_Vector();
    void Print_Optimum();
    void Solve();
};
void get_simplex_method_help();
void do_simplex_method();
int SimplexMethods_main();

#endif //MYPROJECT_SIMPLEXMETHOD_MAIN_H
