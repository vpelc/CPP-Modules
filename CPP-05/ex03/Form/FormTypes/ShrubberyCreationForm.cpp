#include "ShrubberyCreationForm.hpp"
#include <fstream>

static const std::string	_const_name 			= "Shrubbery Creation";
static const int			_const_grade_to_sign 	= 145;
static const int			_const_grade_to_exec 	= 137;

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm(_const_name, _const_grade_to_sign, _const_grade_to_exec), _target(target) 
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
: AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute()), _target(copy.getTarget())
{} 

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	if (this != &src)
		_target = src.getTarget();
	return *this;
}

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm &src)
{
	   o << src.getName() << ", grade needed to sign : " << src.getGradeToSign() 
			<< "and grade needed to execute : " << src.getGradeToExecute() << "." << std::endl;
    return o;
}

int	ShrubberyCreationForm::execute(Bureaucrat const &bur) const
{
	// if (&bur == NULL)
	// 	return 0;
	if (!isSigned())
		return 0;
	if (AForm::isLowerGrade(bur.getGrade(), AForm::getGradeToExecute()))
	{
		throw AForm::GradeTooLowException();
		return 0;
	}
	std::fstream file;
	std::string filename;
	filename.append(_target);
	filename.append("_shrubbery");
	file.open(filename.c_str());
	file << "\n" << 
"              _{\\ _{\\{\\/}/}/}__\n"  <<
"            {/{/\\}{/{/\\}(\\}{/\\} _\n" <<
"           {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n" <<
"        {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\\n}" <<
"       {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n" <<
"      _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n" <<
"     {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n" <<
"     _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n" <<
"    {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n" <<
"     {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n" <<
"      {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n" <<
"     {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n" <<
"      {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n" <<
"        {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n" <<
"         (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n" <<
"           {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n" <<
"            {/{\\{\\{\\/}/}{\\{\\\\}/}\n" <<
"             {){/ {\\/}{\\/} \\}\\}\n" <<
"             (_)  \\.-\'.-/\n" <<
"         __...--- |\'-.-\'| --...__\n" <<
"  _...--\"   .-\'   |\'-.-\'|  \' -.  \"\"--..__\n" <<
"-\"    \' .  . \'    |.\'-._| \'  . .  \'   \n" <<
".  \'-  \'    .--\'  | \'-.\'|    .  \'  . \'\n" <<
"         \' ..     |\'-_.-|\n" <<
" .  \'  .       _.-|-._ -|-._  .  \'  .\n" <<
"             .\'   |\'- .-|   \'.\n" <<
" ..-\'   \' .  \'.   `-._.-´   .\'  \'  - .\n" <<
"  .-\' \'        \'-._______.-\'     \'  .\n" <<
"       .      ~,\n" <<
"   .       .   |\\   .    \' \'-.\n" <<
"   ___________/  \\____________\n" <<
"  /  Why is it, when you want \\\n" <<
" |  something, it is so damn   |\n" <<
" |    much work to get it?     |\n" <<
"  \\___________________________/\n";

	return 1;
}

std::string ShrubberyCreationForm::getTarget( void ) const { return _target;}