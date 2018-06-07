#include "Triangle.h"
#include <stdio.h>

char *getTriangleName(int L1,int L2, int L3){
	
	if (L1 <= 0 || L2 <= 0 || L3 <= 0 ) {
		return "This is not a triangle!";
	}
	
	else  {
		if ( L1 == L2 && L2 == L3 && L1 == L3 ) {	
			return "Equilateral";
		}
		
		if (L1 == L2 || L1 == L3 || L2 == L3) {
			return "Isosceles";
		}
		
		else {
			return "Scalene";
		}
	}	
}