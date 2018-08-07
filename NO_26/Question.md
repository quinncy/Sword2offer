### 面试题26
请实现函数ComplexListNode * Clone(ConmplexListNode * pHead)复制一个复杂链表。
在复杂链表中，每个结点除了有一个m_pNext指针指向下一个结点外，还有一个m_pSibling指向链表中的任意结点或者NULL。
结点的C++定义如下：
```
struct ComplexListNode
{
	int m_nValue;
	ComplexListNode * m_pNext;
	ComplexListNode * m_pSibling;
}
```