#include "helix.h"

Helix::Helix(double radius, double step): radius{radius}, step{step}
{
}

Vector3D Helix::getDerivative(double t) const noexcept
{
    return Vector3D(Point3D(radius * sin(t), radius * cos(t), step / (2 * M_PI)));
}

Point3D Helix::getPoint(double t) const noexcept
{
    return Point3D(radius * cos(t), radius * sin(t), step * t / (2 * M_PI));
}
