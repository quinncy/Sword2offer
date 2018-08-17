### 解题思路：
#### 解法一：暴力法
两个循环，每次指向一个，遍历后面所有数据，看是否有和等于s的

时间复杂度O(n^2)

#### 解法二：指针
定义两个指针，第一个指向第一个数据，第二个指向最后一个数据
如果两个数据相加大于s，那么就把第二个指针向前移动一位
如果两个数据相加小于s，那么就把第一个指针向后移动一位
如果两个数据相加等于s，那么就输出两个指针指向的数据

时间复杂度O(n)

#### 解法一：
用small和big分别表示序列的最大值和最小值
首先small等于1，big等于2

如果从small到big的序列的和大于s，可以从序列中去掉最小的值，也就是增大small的值
如果从small到big的序列的和小于s，可以增大big，让这个序列包含更多的数字，一直增到small到(1+s)/2为止