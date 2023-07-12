//
// Created by Zhou on 12/07/2023.
//

#include "SimplexMethod_main.h"

using namespace std;

void Simplex::InitNums() {
    cout << "Please enter the number of arguments：\n  > ";
    cin >> m;
    cout << "Please enter the number of constraint equations：\n  > ";
    cin >> n;
    A = (double**)malloc(sizeof(double*));
    for (int i = 0; i < n; i++) {
        A[i] = (double*)malloc(m * sizeof(double));
    }//创建一个m*n大小的二维浮点数组
    B = (double*)malloc(n * sizeof(double));        //创建一个n长度的浮点数组
    η = (double*)malloc(m * sizeof(double));        //创建一个m长度的浮点数组
    C = (double*)malloc(m * sizeof(double));        //创建一个m长度的浮点数组
    θ = (double*)malloc(n * sizeof(double));        //创建一个n长度的浮点数组
    Basic_Variable = (int*)malloc(n * sizeof(int));     //创建一个n长度的整型数组
    In_Index = Out_Index = Result = -1;        //令初始出入基变量与最终结果为-1
}

bool Simplex::Check_Optimum() {
    if (In_Index != -1 && Out_Index != -1)
        Basic_Variable[Out_Index] = In_Index + 1;
    for (int i = 0; i < m; i++)
        η[i] = C[i];
    for (int i = 0; i < m; i++)
    {
        double Temp = η[i];
        for (int j = 0; j < n; j++)
            Temp -= A[j][i] * C[Basic_Variable[j] - 1];
        η[i] = Temp;
    }
    bool Check = true;
    for (int i = 0; i < m; i++)
        if (η[i] > 0)
            Check = false;
    return Check;
}

int Simplex::Get_In_Variable(){
    int Index = 0;
    cout << "The number of tests is as follows：" << endl;
    for (int i = m-1; i >= 0; i--)
    {
        cout << setw(6) << η[m-i-1];
        if (η[i] > 0)
            Index = i;
    }
    cout << endl << "The substitution variable is x" << Index + 1 << endl;
    return Index;
}

int Simplex::Get_Out_Variable(){
    bool* Check = new bool[n];
    cout << "θ：";
    for (int i = 0; i < n; i++)
    {
        if (A[i][In_Index] != 0)
        {
            if (B[i] == 0 && A[i][In_Index] < 0)
            {
                θ[i] = 0;
                cout << setw(6) << θ[i];
                Check[i] = false;
            }
            else
            {
                θ[i] = B[i] / A[i][In_Index];
                cout << setw(5) << θ[i];
                Check[i] = true;
            }

        }
        else
        {
            θ[i] = 0;
            cout << setw(6) << "No Value";
            Check[i] = false;
        }
    }
    int Count = 0;
    int Index = 0;
    for (int i = 0; i < n; i++)
    {
        if (Check[i])
        {
            if (θ[i] < 0)
                Count++;
            else if (θ[i] < θ[Index])
                Index = i;
        }
        else if (Index == i)
        {
            Index++;
            Count++;
        }
        else Count++;
    }
    if (Count == n)
    {
        cerr << endl << "The equation only has unbounded solution !" << endl;
        exit(-1);
    }
    while (Basic_Variable[Index] == (In_Index + 1))
        Index++;
    cout << endl << "The swap out variable is：x" << Basic_Variable[Index] << endl;
    return Index;
}

void Simplex::Update_Vectors(){
    double Temp_1 = A[Out_Index][In_Index];
    for (int i = 0; i < m; i++)
        A[Out_Index][i] /= Temp_1;
    B[Out_Index] /= Temp_1;
    for (int i = 0; i < n; i++)
    {
        double Temp_2 = A[i][In_Index] / A[Out_Index][In_Index];
        if (i != Out_Index)
        {
            for (int j = 0; j < m; j++)
                A[i][j] -= A[Out_Index][j] * Temp_2;
            B[i] -= B[Out_Index] * Temp_2;
        }
    }
}

void Simplex::GetNums(){
    InitNums();
    cout << "Please enter the coefficients of the objective function in turn：\n  > " ;
    for (int i = 0; i < m; i++)
        cin >> C[i];
    cout << "Please enter the coefficients of the constraint equation in turn：\n  > " ;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];
    cout << "Please enter the constants for each constraint equation in turn：\n  > " ;
    for (int i = 0; i < n; i++)
        cin >> B[i];
}

void Simplex::Init_Basic_Variable(){
    for (int i = 0; i < n; i++)
        Basic_Variable[n - i - 1] = m - i;
    cout << "The correlation variable is：" << endl;
    for (int i = 0; i < n; i++)
        cout << setw(3) << "x" << Basic_Variable[i];
    cout << endl;
}

void Simplex::Print_Vector(){
    cout << "The current augmented matrix is：" << endl;
    cout << "---------------------------------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << setw(5) << A[i][j];
        cout << setw(5) << B[i] << endl;
    }
    cout << "---------------------------------------------------" << endl;
}

void Simplex::Print_Optimum(){
    Result = 0;
    for (int i = 0; i < n; i++)
        Result += C[Basic_Variable[i] - 1] * B[i];
    cout << "The optimal solution is：\n        Z = " << Result << endl;
}

void Simplex::Solve(){
    while (!Check_Optimum())    // 判断是否最优解
    {
        In_Index = Get_In_Variable();  // 找换入变量
        Out_Index = Get_Out_Variable();    // 找换出变量
        Update_Vectors();        // 旋转运算，更新矩阵
        Print_Vector();      //输出矩阵
        cout << endl;
    }
    Print_Optimum();    // 输出最优解
}


void get_simplex_method_help(){
    cout<<"Here is an example :\n"
          "-----------------------------------------------------------------------\n"
          "Please enter the number of arguments：\n"
          "  > 7\n"
          "Please enter the number of constraint equations：\n"
          "  > 3\n"
          "Please enter the coefficients of the objective function in turn：\n"
          "  > 0.75  -20   0.5  -6  0  0  0\n"
          "Please enter the coefficients of the constraint equation in turn：\n"
          "  > 0.25  -8  -1  9  1  0  0\n"
          "      0.5  -12  -0.5  3  0  1  0\n"
          "      0  0  1  0  0  0  1\n"
          "Please enter the constants for each constraint equation in turn：\n"
          "  > 0  0  1\n"
          "The number of tests is as follows：\n"
          "     0  -4.8     0     0   1.4  -2.2  -0.2\n"
          "The substitution variable is x5\n"
          "θ：No Value 0.75 -0.5\n"
          "The swap out variable is：x4\n"
          "The current augmented matrix is：\n"
          "---------------------------------------------------\n"
          "    0    0    1    0    0    0    1    1\n"
          "    0   -2    0  7.5    1 -0.5 0.75 0.75\n"
          "    1  -24    0    6    0    2    1    1\n"
          "---------------------------------------------------\n"
          "\n"
          "The optimal solution is：\n"
          "        Z = 1.25\n\n";
}

void do_simplex_method(){
    cout<<"Attention !\nMust be reduced to normal form first !\n";
    Simplex Problem;
    Problem.GetNums();    //输入数据
    Problem.Print_Vector();
    Problem.Init_Basic_Variable();   //设置初始基变量
    Problem.Solve();        //解决问题
}

int SimplexMethods_main(){
    try{
        char ch=0;
        while(true){
            cout<<"Simplex Method Linear Programming Solver.\n"
                  "Welcome !\n"
                  "Type \"h\" to get help information.\n"
                  "Type \"q\" to quit this programme.\n"
                  "Type \"u\" to use key functions.\n"
                  "  > ";
            cin>>ch;
            switch (ch) {
                case 'h':
                    get_simplex_method_help();
                    break;
                case 'u':
                    do_simplex_method();
                    return 0;
                case 'q':
                    return 0;
                default:
                    error("input char illegal !");
            }
        }
    }
    catch (exception&e) {
        cerr<<"ERROR !\n"<<e.what()<<endl;
    }
    return 0;
}