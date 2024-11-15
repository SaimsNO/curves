#pragma once

#include "curve.h"

namespace Curves{

    class CURVELIBRARY_API Circle: public Curve
    {
    private:
        double radius;
    public:
        Circle(double radius);
        Vector3D getDerivative(double t) const noexcept override;
        Point3D getPoint(double t) const  noexcept override;
        double getRadius() const noexcept;
    };
    
}


