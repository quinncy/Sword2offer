### 解题思路：
#### 1.跳进面试官陷阱
直接求出最大数，然后利用循环开始逐个打印

问题：
没有规定n的范围，大数问题

#### 2.在字符串上模拟数字加法的解法
由于字符串最后一位为'\0'，因此n位数字需要n+1位的字符串长度

首先，将字符串里n位全部置为'0'
，每次为字符串表示的数字+1，再打印出来

在判断是否溢出时，可以通过判断最高位是否进位得到
在打印结果时，需要考虑去掉前面多余的0字符

#### 3.问题转化为数字排列的解法
所有的十进制数，就是n个从0到9的全排列。