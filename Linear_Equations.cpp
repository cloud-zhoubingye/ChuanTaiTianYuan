//
// Created by Zhou on 03/05/2023.
//
#include "Linear_Equations.h"

Index var_num;

void classical_elimination(my_matrix &A, my_vector &b)
{
    //A为n*n阶方阵
    const Index n =A.dim1();

    //遍历第1~n-1列
    for (Index col = 0; col < n ; ++col) {
        const Index current_row = col;

        //该程序块内更换更合适的主元，以免主元为0
        {
            Index suitable_pivot_row = col;
            //查找合适的主元
            for (Index i = suitable_pivot_row + 1; i < n; ++i) {
                if (abs(A(i, col)) > abs(A(suitable_pivot_row, col)))
                    suitable_pivot_row = i;
            }
            //如果有更合适的主元，交换两行
            if (suitable_pivot_row != current_row){
                A.swap_rows(current_row, suitable_pivot_row);
                std::swap(b(current_row), b(suitable_pivot_row));
            }
        }

        //获取当前主对角线上的元素，如果为0，不存在唯一解
        const double pivot_element = A(current_row, col);
        if (pivot_element==0)
            error("There is no unique solution!");

        //初等行变换：将第col行的某倍数加至第col行 ~ 第n行
        for (Index row = current_row + 1; row < n; ++row) {
            //计算倍数
            const double multiplier = A(row, col) / pivot_element;
            //倍加
            A[row].slice(col) = scale_and_add(A[current_row].slice(col), -multiplier, A[row].slice(col));
            b(row) -= multiplier * b(current_row);
        }
    }
}

my_vector back_substitution(const my_matrix &A, const my_vector &b)
{
    //创建返回对象
    const Index n = A.dim1();
    my_vector result(n);

    //回代求解
    for (Index row = n - 1; row >= 0; --row) {
        const double col = row;

        //主元系数为0，有无穷多解，无法解出
        if (A(row, col)==0)
            error("There is no unique solution!");

        //回代
        double answer_of_x = (b(row) - dot_product(A[row].slice(col + 1), result.slice(col + 1)))/A(row, col);
        result(row) = answer_of_x;
    }
    return result;
}

my_vector classical_gaussian_elimination(my_matrix A, my_vector b)
{
    classical_elimination(A, b);
    return back_substitution(A, b);
}

void Do_Liner_Equations()
{
    try{
        cout<<"Enter expressions of matrix\n"
              "Pay attention to using floating-point numbers in matrix, terminating with CRLF\n"
              "Every Row should be put in \"{ }\"\n"
              "The whole matrix should be put in \"{ }\" as well\n";
        cout<<"\nFirst of all, input the number of variable : \n  > ";
        cin>>var_num;
        if(!cin) error("number of variable input illegally !\n");
        cout<<"The number of variable is "<<var_num<<endl
            <<"Enter Coefficient Matrix, then Right End Term Matrix : \n";
        my_matrix A(var_num,var_num);
        my_vector b(var_num);
        cin>>A>>b;
        cout<<"Get A:\n"<<A<<endl
            <<"Get b:\n"<<b<<endl;
        my_vector x = classical_gaussian_elimination(A, b);
        cout<<"\nResult is:\n"<<x;
    } catch (exception &e) {
        cerr<<"ERROR !\n"<<e.what()<<endl;
    }
}
