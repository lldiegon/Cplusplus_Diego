#include "opgevulde_rechthoek.hpp"
#include "window.hpp"

template <class T> void swap( T& a, T& b ){
  T c(a); a=b; b=c;
}

void opgevulde_rechthoek::print(){
	for (int i = start_x; i<end_x; ++i){
		for (int j = start_y; j<end_y; ++j){
			w.draw(j,i);
		}
	}
}

