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

#pragma once
#include "../object.h"

#include "shift.h"
#include "shift.cpp"

#include "stress_value.h"
#include "stress_value.cpp"

#include "linalg.h"
#include "linalg.cpp"

#include "../paraview/out.h"
#include "../paraview/out.cpp"

template<class O>
class Solver: virtual Shift<O>, virtual Linalg<O>, Stress_value<O>, Out<O>
{	
public:
	Solver();
	~Solver();
	void FEM_solver(O &obj);
protected:
private:

};
