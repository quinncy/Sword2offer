### 面试题7：用两个栈实现队列
用两个栈实现一个队列。
队列的声明如下，请实现它的两个函数appendTail和deleteHead，
分别完成在队列尾部插入结点和在队列头部删除结点的功能。

```
template <typename> class cQueue
{
	public:
		cQueue(void);
		~cQueue(void);

		void appendTail(const T& node);
		T deleteHead();

	private:
		stack<T> stack1;
		stack<T> stack2;
}
```

### 问题延伸
用两个队列实现一个栈