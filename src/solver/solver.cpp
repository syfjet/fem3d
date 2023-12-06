// Copyright (C) Simple_FEM3D Aleksey Chesnokov
// This file is part of Simple_FEM3D <https://github.com/syfjet/simple_fem3d>.
//
// Simple_FEM3D is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Simple_FEM3D is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Simple_FEM3D.  If not, see <http://www.gnu.org/licenses/>.

#include "solver.h"

template <class O> 
Solver<O>::Solver(){};
template <class O> 
Solver<O>::~Solver(){};         

template <class O> 
void Solver<O>::FEM_solver(O &obj)
{
    Shift<O>::define_matrix(obj);    

    Linalg<O>::solve_linear_system(obj);    
    Stress_value<O>::define_stress_values(obj);
    Out<O>::out_paraview(obj);
};
