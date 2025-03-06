#include <iostream>
#include <chrono>
#include "tri_fix.h"
using namespace std;


	

int main()
{
	tri_fix tri;
	string input, output_obj;
	int fix_hole = 0;
	int local_layer = 0;
	int iteration = 0;
	tri.trimefixing(input, output_obj, fix_hole, local_layer, iteration);
	return 0;
	
}





