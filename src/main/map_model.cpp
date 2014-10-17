#include "map_model.hpp"
#include <iostream>

MapModel::map_ptr	MapModel::GetMap()
{
	return map_;
}

void MapModel::Load( const std::string fileName )
{
	map_->Load( fileName );
}

size_t MapModel::LineCount()
{
	return map_->GetRows();
}

MapModel::line_ptr MapModel::NextLine()
{
	return map_->GetRow( 0 );
}

