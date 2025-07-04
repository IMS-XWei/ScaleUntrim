# Scalable Field-Aligned Reparameterization for Trimmed NURBS

## Overview
ScaleUntrim is an open-source software package to reconstruct trimmed CAD models as a watertight spline representation (i.e., multi-patch NURBS).

## Software

The software supports CMake build for Linux/Mac/Windows systems, which converts a trimmed CAD modal  `(.stp/.igs)` into an untrimmed NURBS `(.step)`.

We recommend Visual Studio 2022 in Windows for compiling.

## External Dependencies

- Boost
- Eigen
- OpenCascade

## Install

We recommend CMake to generate the project system. (Cmake_minimum_required: VERSION 3.0).

Prerequisite: Boost, Eigen, OpenCascade.

```
git clone 
mkdir build
cd build
cmake .. 
make
```

Open the project for the first time: 
- Open project - Local Windows Debugger(without any operations) 
- Set "quadriflow" as setup project



## Parameter 

All parameters can be adjusted in the `setting.config` file.

```text
temp_dir: D:\\ScaleUntrim\\
run_from: 0
tri_mesh_tolerance: 1.e-4
fix_hole: 0
magnitude_factor: -1
angle_for_sharp: 60
minimum_cost: 0
collapsing_layer: 1
fit_tolerance: 1.e-2
```

`temp_dir` is used to store intermediate files generated during the pipeline, such as triangular meshes, quadrilateral meshes, and so on.

`run_from` indicates from which step in the pipeline to resume running.

`tri_mesh_tolerance` controls the resolution of the triangle mesh.

`fix_hole` is a switch that fixes the defective holes, which exceed the given tolerance, with new triangle meshes.

`magnitude_factor` controls the resolution of the quadrilateral mesh.

`angle_for _sharp` recognizes sharp features.

`minimum_cost` is an optimizer switch to remove the position field singularity.

`collapsing_layer` indicates the width of the slender patches, i.e., containing the number of quad mesh layers.

`fit_tolerance`controls the fitting error.

## Licenses
MIT License

Copyright (c) 2025 Xiaodong Wei, Zheng Wei, Haoyu Su, Shizhou Luo

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

## Authors

- <u>Zheng Wei</u>
- <u>Haoyu Su</u>
- <u>Shizhou Luo</u>
- <u>Xiaodong Wei</u>
