#pragma once

#include "curve.h"

namespace Curves{

    class CURVELIBRARY_API Ellipse: public Curve{
        double radiusX, radiusY;
    public:
        Ellipse(double radiusX, double radiusY);
        Vector3D getDerivative(double t) const noexcept override;
        Point3D getPoint(double t) const noexcept override;
    };
    
}