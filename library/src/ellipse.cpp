#include "ellipse.h"

Ellipse::Ellipse(double radiusX, double radiusY): 
    radiusX{std::max(0.0, radiusX)}, 
    radiusY{std::max(0.0, radiusY)}
{}

Vector3D Ellipse::getDerivative(double t) const noexcept
{
    return Vector3D(Point3D(-radiusX * sin(t), radiusY * cos(t), 0.0));
}

Point3D Ellipse::getPoint(double t) const noexcept
{

    return Point3D{radiusX * cos(t), radiusY * sin(t), 0.0};
}
