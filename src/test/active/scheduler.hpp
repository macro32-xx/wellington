#ifndef SCHEDULER_HPP
#define SCHEDULER_HPP

#include <cstddef>

#include <boost/thread.hpp>
#include <boost/asio.hpp>

#include "request.hpp"

class Run
{

public:

	void operator()() 
	{
	/***
		check the list
		if not empty
		{
			check next entry (priority)
			if ready to run
				get entry
				invoke subject method
		}
	***/
	}
};

class Scheduler
{

public:

	typedef boost::mutex mutex_type;

	Scheduler( std::size_t maxThreads, std::size_t maxRequests );

	void Insert( Request::request_ptr request );

	virtual void Dispatch();

private:

	//ActivationList activationList_;

	//static void Run();

	boost::thread thread_;

	boost::asio::io_service ioService_;
	boost::asio::io_service::work work_;

	std::size_t maxThreads_;

	std::size_t maxRequests_;
	std::size_t requestCount_;

	mutex_type mutex_;

};

#endif

