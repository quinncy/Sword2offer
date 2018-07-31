### 面试题6：
输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。
假设输入的前序遍历和中序遍历的结果中都不含重复的数字。
例如输入前序遍历序列{1，2，4，7，3，5，6，8}和
中序遍历{4，7，2，1，5，3，8，6}，则重建出二叉树并输出它的头结点。
二叉树结点的定义如下：
```
struct BinaryTreeNode
{
	int m_nValue;
	BinaryTreeNode * m_pLeft;
	BinaryTreeNode * m_pRight;
};
```

