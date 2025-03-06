#include <iostream>
#include"tri_fix.h"
#include"fixmesh.h"
#include"load.h"

void tri_fix::trimefixing(string input, string output_obj, int fix_hole, int local_layer, int iteration) {
	load load;
	fIxmesh fix;
	cout << "starting input" << "\n";
	/*load.converse(input, input1);*/
	load.Loader(input);
	/*load.Loader_errortri(input, 22, 27)*/;
	cout << "starting fix" << "\n";
	int need_fix = 0;
	load.initialize();
	/*vector<int> n;
	n.push_back(5458150);
	n.push_back(10867491);
	change_normal(load, n);*/
	if (need_fix) {
		fix.Fixmesh(load, fix_hole, local_layer, iteration);
	}
	load.Outer(output_obj.c_str(), need_fix);
}