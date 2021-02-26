#pragma once
#include<iostream>
#include<string>

namespace ft559_tools {
	

	class Binary_linear_equations {
	public:
		int LINE_1_X, LINE_1_Y, LINE_1_RESULT,
			LINE_2_X, LINE_2_Y, LINE_2_RESULT;
		void GET_NUMBER(int x1, int x2, int y1, int y2, int result1, int result2);
		std::string GET_RESULT();
	};

	//用户输入的x，y的系数输入到这六个变量中
	void Binary_linear_equations::GET_NUMBER(int x1,int y1,int x2,int y2,int result1,int result2) {
		LINE_1_X = x1, LINE_1_Y = y1, LINE_1_RESULT = result1,
		LINE_2_X = x2, LINE_2_Y = y2, LINE_2_RESULT = result2;
	}

	/* line 1: LINE_1_X x + LINE_1_Y y = LINE_1_RESULT
	   line 2: LINE_2_X x + LINE_2_Y y = LINE_2_RESULT
	*/

	//解二元一次方程组
	std::string Binary_linear_equations::GET_RESULT()
	{
		int x,y;
		int m, a122, b12, c;//临时变量

		//运算过程
		m = LINE_2_X / LINE_1_X;
		a122 = LINE_2_Y - (m * LINE_1_Y);
		b12 = LINE_2_RESULT - (m * LINE_1_RESULT);
		y = b12 / a122;
		c = LINE_1_RESULT - (LINE_1_Y * y);
		x = c / LINE_1_X;

		std::string str_x = std::to_string(x);
		std::string str_y = std::to_string(y);

		return str_x , str_y;//返回结果
	}
}
