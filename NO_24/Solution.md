### 解题思路：
后序遍历，最后一个为根节点
从头开始遍历，比他小的属于左子树
比他大的属于右子树

如果是正确的序列，前半部分应该都比根节点小
后半部分都比根节点大

递归实现