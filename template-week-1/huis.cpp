#include "huis.hpp"
#include "window.hpp"
#include "values.hpp"
#include <stdio.h>

template <class T> void swap( T& a, T& b ){
  T c(a); a=b; b=c;
}

void huis::print(){
	// Hier wordt het frame geprint
	for (int n=start_y_frame_l; n<start_y_frame_l+length_y_frame; ++n){
		w.draw(start_x_frame_l,n);
		//w.draw(end_body_x_top-1,n);
	}
	
	// Hier wordt het raam geprint
	for(int y=-radius_raam; y<=radius_raam; y++){
		for(int x=-radius_raam; x<=radius_raam; x++){
			if(x*x+y*y <= radius_raam*radius_raam){
				w.draw(center_raam_x+x, center_raam_y+y);
			}
		}
	}
	//rectangle box( w, 20, 10, 30, 20 );
	//box.print();
}

/*
huis::huis()
{
}

huis::~huis()
{
}
*/ 
//return 0;

