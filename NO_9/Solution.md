### 解题思路
#### 解法1：直接利用递归实现
f(n) = f(n-1) + f(n-2);
但是在计算时会发现，f(3) = f(2) + f(1);需要算出f(2)和f(1)
f(4) = f(3) + f(2)，需要计算f(3)和f(2)；
f(2)已经计算过来，因此存在很多重复计算
这种解法，效率不高

#### 解法二：时间复杂度为O(n)的算法
先根据f(0)和f(1)计算出f(2)
再根据f(1)和f(2)计算出f(3)
依次类推，得到f(n)

```
long long Fibonacci(unsigned n)
{
	int result[2] = {0,1};
	if(n < 2)
		return result[n];

	long long fibN = 0;
	long long fibN_1 = 1;
	long long fibN_2 = 0;

	for(unsigned int i = 2; i <= n; i++)
	{
		fibN = fibN_1 + fibN_2;
		
		fibN_2 = fibN_1;
		fibN_1 = fibN;
	}
}
```

#### 解法三：
利用
```
[f(n)	f(n-1)]			[1	1]^(n-1)
 f(n-1) f(n-2)		= 	 1	0
```
-----------------------------------

```		
		a^(n/2) * a^(n/2)	n为偶数
a^n =	a^((n-1)/2) * a^((n-1)/2) * a	n为奇数
``` 

