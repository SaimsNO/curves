#pragma once

#include "curve.h"

class Ellipse: public Curve{
    double radiusX, radiusY;
public:
    Ellipse(double radiusX, double radiusY);
    Vector3D getDerivative(double t) const noexcept override;
    Point3D getPoint(double t) const noexcept override;
};