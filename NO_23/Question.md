### 面试题23：从上往下打印二叉树
从上往下打印出二叉树的每个结点，同一层的结点按照从左到右的顺序打印。
二叉树的结点定义如下：
```
struct BinaryTreeNode
{
	int m_nValue;
	BinaryTreeNode * m_pLeft;
	BinaryTreeNode * m_pRight;
}
```