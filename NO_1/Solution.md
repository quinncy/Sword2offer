#思考：#

##1.是否考虑连续赋值##
是否把返回值类型声明为该类型的引用，并在函数结束前返回实例自身的引用（即 *this）  

##2.是否把传入参数类型声明为常量引用##
如果传入参数不是引用，而是实例，那么从新参到实参会调用一次复制构造函数；  
同时，赋值运算符内不会改变传入实例的状态，因此应该加上const；  

##3.是否释放实例自身已有的内存##
如果忘记在分配新内存之前释放自身已有空间，将出现内存泄露；  

##4.是否判断传入参数与当前实例（* this）为同一实例##
如果是同一个，不需赋值，直接返回；  
因为不加判断，在释放自身内存时，传入参数内存也就会被释放；  
从而找不到需要赋值的内容；

