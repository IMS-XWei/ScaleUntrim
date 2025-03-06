
#include"quadgeneration.h"
#include <stdlib.h>
#include <iostream>

using namespace qflow;
int main() 
{ 
	
	quadgeneration a;
    std::string input_obj, output_obj, output_patch_obj, output_patch_txt;
    int preserve_sharp = 0, preserve_boundary = 0, minimum_cost_flow = 0, adaptive_scale = 0;
    double faces = -1;
    double angle = 60;
    a.QMG(input_obj, output_obj, output_patch_obj, output_patch_txt, faces, preserve_sharp, preserve_boundary, minimum_cost_flow, adaptive_scale, angle);
    std::vector<Vector3d> V;
    std::vector<Vector4i> F;
    a.meshinformation(V, F);
	
	
	
	return 0; 
}
