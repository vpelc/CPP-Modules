#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const RPN &src) : _num_stack(src._num_stack)
{}

RPN::~RPN(){}

RPN &RPN::operator=(RPN const &src)
{
	if(this == &src)
	{
		_num_stack = src._num_stack;
	}
	return *this;
}

void RPN::parse(char *arg)
{
	int i = 0;
	while (arg[i])
	{
		while (isspace(arg[i]))
			i++;
		if (isdigit(arg[i]))
		{
			int num = arg[i] - '0';
			_num_stack.push(num);
		}
		else if (is_operator(arg[i]))
			get_operator(arg[i]);
		i++;
	}
	if (_num_stack.size() > 1)
		throw notEnoughOperatorsException();
}

int	RPN::get_stack_top(void) const { return _num_stack.top(); }