#ifndef STDSCR_IMODEL_HPP
#define STDSCR_IMODEL_HPP

#include "types.hpp"

class StdScrIModel
{

public:

	virtual void Init() = 0;
	virtual void Reset() = 0;
	virtual void Terminate() = 0;

	virtual void Load() = 0;
	virtual void Display() = 0;

	virtual void LoadMap() = 0;
	virtual void LoadKey() = 0;

	virtual void DisplayMap() = 0;
	virtual void DisplayKey() = 0;
	virtual void DisplayCommand() = 0;
	virtual void DisplayUnits() = 0;

	virtual void LoadMap( const std::string& fileName ) = 0;
	virtual void LoadKey( const std::string& fileName ) = 0;

	virtual stdscr_ikey_ptr GetKey() = 0;
};

typedef boost::shared_ptr< StdScrIModel > stdscr_imodel_ptr;

#endif
