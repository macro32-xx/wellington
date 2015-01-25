#ifndef DRIVER_HPP
#define DRIVER_HPP

#include <fstream>
#include <sstream>
#include <string>

#include <boost/smart_ptr.hpp>

class Driver
{

public:

	Driver( class Order& order );

	bool ParseFile( const std::string& name );
	bool ParseStream( std::istream& input, const std::string& name );
	bool ParseString( const std::string& input, const std::string& name );

	void Error( const std::string& message );

	std::string name_;

	class Scanner* lexer_;

	class Order& order_;
};


#endif

