### 10_ClassAndObject

+ 类和对象的定义
+ 构造函数和析构函数

1.  /* 0_main.cpp *  0_stock.cpp  *  0_stock.h */

   ```
   // 解决的问题：股票Stock的买入和卖出
   // 题目一：实现股票stock的公共函数的定义
   // 公共函数部分：实现程序和私有数据访问的接口；
   // 包含数据的初始化，计算，更新显示
   ```

2. /* 1_main.cpp *  1_new_stock.cpp  *  1_new_stock.h */

   ```
   // 题目二：添加构造函数和析构函数
   // 增加了构造函数--为了对隐藏的数据成员进行初始化；
   // 增加了析构函数--对new创建的对象进行清除
   // 增加一个 this指针，访问两个对象中的数据成员，返回其中的最大值
   ```

3. /* 2_this_main.cpp */

   ```
   // 题目三：this指针结合对象数组的一个使用实例
   ```

4. /* 3_stack.cpp *  3_stack_class.cpp  *  3_stack_class.h */

   ```
   // 题目四:将类的概念融入到ADT中;
   //类的公有成员函数提供了表示栈操作的接口，而私有数据成员负责存储栈数据；
   ```

   