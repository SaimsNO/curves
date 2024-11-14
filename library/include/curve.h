#pragma once

#include <algorithm>
#include <cmath>
#include "defines.h"
#include "point3D.h"
#include "vector3D.h"

#ifdef M_PI
double const pi = M_PI;
#else
double const pi = 4*std::atan(1);
#endif

namespace Curves{

    class CURVELIBRARY_API Curve{
    public:
        virtual Vector3D getDerivative(double t) const noexcept = 0;
        virtual Point3D getPoint(double t) const noexcept = 0;
    };

}