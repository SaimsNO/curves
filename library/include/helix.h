#pragma once

#include "curve.h"

namespace Curves{

    class CURVELIBRARY_API Helix: public Curve{
        double radius;
        double step;
    public:
        Helix(double radius, double step);
        Vector3D getDerivative(double t) const noexcept override;
        Point3D getPoint(double t) const noexcept override;
    };
    
}