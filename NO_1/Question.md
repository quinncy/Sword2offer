#面试题一：赋值运算符函数#

题目：如下为类型CMyString的声明，请为该类型添加赋值运算符函数。

class CMyString
{

	public:
		CMyString(char *pData = NULL);
		CMyString(const CMyString &str);
		~CMyString(void);
	
	private:
		char* m_pData;
};



