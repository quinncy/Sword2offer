### 解题思路
分三步：5+7
第一：各位相加不进位----2
第二：做进位  ----- 10
第三：将前面两步结果加起来 ----12

只能用位运算
5  --- 101
17 ---- 10001
第一步：10100（异或）
第二步：10（先做位与，然后左移一位）
第三步：10110 --- 22（重复前面两步，直到没有进位）