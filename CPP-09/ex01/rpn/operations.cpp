#include "RPN.hpp"

void RPN::addition()
{
	int num2 = _num_stack.top();
	_num_stack.pop();
	int num1 = _num_stack.top();
	_num_stack.pop();
	int res = num1 + num2;
	_num_stack.push(res);
}

void RPN::substraction()
{
	int num2 = _num_stack.top();
	_num_stack.pop();
	int num1 = _num_stack.top();
	_num_stack.pop();
	int res = num1 - num2;
	_num_stack.push(res);
}

void RPN::multiplication()
{
	int num2 = _num_stack.top();
	_num_stack.pop();
	int num1 = _num_stack.top();
	_num_stack.pop();
	int res = num1 * num2;
	_num_stack.push(res);
}

void RPN::division()
{
	int num2 = _num_stack.top();
	_num_stack.pop();
	int num1 = _num_stack.top();
	_num_stack.pop();
	if (num2 == 0)
		throw divisionByZeroException();
	int res = num1 / num2;
	_num_stack.push(res);
}


void RPN::get_operator(char c)
{
	if (_num_stack.size() < 2)
		throw notEnoughNumbersException();
	if (c == '+')
		addition();
	else if (c == '-')
		substraction();
	else if (c == '*')
		multiplication();
	else if (c == '/')
		division();
}