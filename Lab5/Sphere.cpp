#include "Sphere.h"

Sphere::Sphere()
{
}

Sphere::Sphere(double radius)
{
    this->radius = radius;
}

double Sphere::getSurfaceArea() const
{
    return 4 * M_PI * pow(radius, 2);
}

double Sphere::getVolume() const
{
    return (4. / 3) * M_PI * pow(radius, 3);
}

string Sphere::getObjectName() const
{
    return "Sphere";
}

ostream& operator<<(ostream& o, const Sphere& sp)
{
    o << sp.getObjectName() + " radius: " << sp.radius << endl
        << (Object3D&)sp;
    return o;
}
