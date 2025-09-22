#include "RPN.hpp"

void RPN::addition()
{
	int num1 = _num_stack.top();
	_num_stack.pop();
	int num2 = _num_stack.top();
	_num_stack.pop();
	int res = num1 + num2;
	_num_stack.push(res);
}

void RPN::substraction()
{
	int num1 = _num_stack.top();
	_num_stack.pop();
	int num2 = _num_stack.top();
	_num_stack.pop();
	int res = num1 - num2;
	_num_stack.push(res);
}

void RPN::multiplication()
{
	int num1 = _num_stack.top();
	_num_stack.pop();
	int num2 = _num_stack.top();
	_num_stack.pop();
	int res = num1 * num2;
	_num_stack.push(res);
}

void RPN::division()
{
	int num1 = _num_stack.top();
	_num_stack.pop();
	int num2 = _num_stack.top();
	_num_stack.pop();
	if (num2 == 0)
		throw divisionByZeroException();
	int res = num1 / num2;
	_num_stack.push(res);
}

bool RPN::is_operator(char c)
{
	if (c == '+')
	{
		addition();
		return true;
	}
	else if (c == '-')
	{
		substraction();
		return true;
	}
	else if (c == '*')
	{
		multiplication();
		return true;
	}
	else if (c == '/')
	{
		division();
		return true;
	}
	else
		throw invalidCharException();
}