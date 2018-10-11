#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <sstream>

/*
****************************** CONVERT CLASS ***********************************
*/

class Convert
{
	private:

		char				_charVal;
		int					_intVal;
		float				_floatVal;
		double				_doubleVal;
		std::string			_strInput;

	public:

		Convert(void);
		Convert(std::string input);
		Convert(Convert const & convert);
		~Convert(void);

		Convert &		operator=(Convert const & convert);

		char			getChar(void);
		int 			getInt(void);
		float 			getFloat(void);
		double 			getDouble(void);

		void			convertValue(void);
		void			displayConvertion(void);
};

#endif
