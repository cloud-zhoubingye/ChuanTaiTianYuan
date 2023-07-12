#  <center>__“🛶🇹🇭🍬⭕️”__
## <center>__川太天元__
######  川太天元是一个数值计算模拟轻量级软件，提供复合运算表达式、解线性方程组、最小二乘法和线性规划问题的快速、易上手的求解
### 1. 复合运算表达式
使用从expression到term再到primary的逐层优先级降低的嵌套递归文法规则，进行含有 +、-、*、/ 以及 ( ) 的混合运算，并且提供基本数学函数和预定义pi、e的变量值，还支持变量自定义与使用。
### 2. 解线性方程组
使用经典高斯消元法进行线性方程组的求解，高效又简洁，其中手撸了对矩阵的乘法以及三种矩阵初等行变换和列变换的支持，可扩展性非常高。
### 3. 最小二乘法
使用样本集构建范德蒙德矩阵的代数方法进行最小二乘曲线的拟合，本质上仍然是求解线性方程组Aw=b获得最优化函数。
### 4. 线性规划
数值地对标准化后的线性规划问题进行快速求解，使用的是George Dantzig发明的用于优化多维无约束问题的搜索算法——单纯形法。