#pragma once

#include <algorithm>
#include <cmath>

#include "point3D.h"
#include "vector3D.h"


class Curve{
public:
    virtual Vector3D getDerivative(double t) const noexcept = 0;
    virtual Point3D getPoint(double t) const noexcept = 0;
};