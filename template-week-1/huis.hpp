#ifndef HUIS_HPP
#define HUIS_HPP
#include "window.hpp"


class huis{
private:
	int aantal;
	window & w;
	
public:
	huis(window & w, int aantal ):
		aantal( aantal ), 
		w( w )
	{}
	void print();
};

#endif // HUIS_HPP
