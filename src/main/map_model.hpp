#ifndef MAP_MODEL_HPP
#define MAP_MODEL_HPP

#include <string>

#include <boost/smart_ptr.hpp>

#include "map.hpp"

class MapModel
{

public:

	typedef boost::shared_ptr< Map >	map_ptr;
	typedef boost::shared_ptr< std::string > line_ptr;

	MapModel()
		: 	map_( boost::make_shared< Map >() ),
			currentMap_( boost::make_shared< Map >() )
	{}

	map_ptr	GetMap();

	void Load( const std::string fileName );

	line_ptr NextLine();
	size_t LineCount();

private:

	map_ptr		map_;
	map_ptr		currentMap_;
};

#endif

