### 解题思路：
设置一个辅助栈
如果下一个弹出的数字刚好是栈顶数字，那么直接弹出
如果下一个弹出的数字不在栈顶，把压栈序列中还没有入栈的数字压入辅助栈，直到把下一个需要弹出的数字压入栈顶为止。
如果所有的数字都压入栈了仍然没有找到下一个弹出的数字，那么该序列不可能是一个弹出序列。