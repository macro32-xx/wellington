#ifndef ORDER_HPP
#define ORDER_HPP

#include <map>
#include <vector>
#include <iostream>
#include <sstream>

#include "order_dictionary.hpp"

namespace order
{

class Order 
{

public:

	typedef boost::shared_ptr< Order > order_ptr;

	void Add( const std::string& value )
	{
		sentence_.push_back( value );
	}

	void Add( Dictionary::entry_ptr entry )
	{
		entries_.push_back( entry );
	}

	void Translate()
	{
		for( std::vector< std::string >::iterator it = sentence_.begin();
				it != sentence_.end();
				++it )
		{
				
		}
	}

private:

	std::vector< Dictionary::entry_ptr > entries_; 
	std::vector< std::string > sentence_;

};

class OrderContext
{

public:

	static void Translate( Order::order_ptr order )
	{
		order->Translate();
	}

	OrderContext( const Dictionary& dictionary )
		: dictionary_( dictionary )
	{}

	void Clear()
	{
		orders_.clear();
	}

	void Analyse()
	{
		std::for_each( orders_.begin(), orders_.end(), OrderContext::Translate );
	}

	std::vector< Order::order_ptr > orders_;

	const Dictionary&	dictionary_;

};

}
 
#endif

