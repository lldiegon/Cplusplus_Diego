#ifndef OPGEVULDE_RECHTHOEK_HPP
#define OPGEVULDE_RECHTHOEK_HPP

#include "window.hpp"

class opgevulde_rechthoek
{
private:
		window & w;
		int start_x;
		int start_y;
		int end_x;
		int end_y;
public:
		opgevulde_rechthoek( window & w, int start_x, int start_y, int end_x, int end_y ):
		w(w),
		start_x(start_x),
		start_y(start_y),
		end_x(end_x),
		end_y(end_y)
		{}
		void print();
};

#endif // OPGEVULDE_RECHTHOEK_HPP
