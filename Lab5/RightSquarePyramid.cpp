#include "RightSquarePyramid.h"

RightSquarePyramid::RightSquarePyramid()
{
}

RightSquarePyramid::RightSquarePyramid(double height, double baseSide)
{
    this->height = height;
    this->baseSide = baseSide;
}

double RightSquarePyramid::getAreaOfBase() const
{
    return baseSide * baseSide;
}

double RightSquarePyramid::getApotheme() const
{
    return sqrt(pow(height, 2) + pow(baseSide / 2, 2));
}

double RightSquarePyramid::getSideSurfaceArea() const
{
    return getAreaOfBase() * getApotheme();
}

double RightSquarePyramid::getSurfaceArea() const
{
    return getAreaOfBase() + getSideSurfaceArea();
}

double RightSquarePyramid::getVolume() const
{
    return (1./3) * getAreaOfBase() * height;
}

string RightSquarePyramid::getObjectName() const
{
    return "Right square pyramid";
}

ostream& operator<<(ostream& o, const RightSquarePyramid& p)
{
    o << p.getObjectName() + " height: " << p.height << endl
        << p.getObjectName() + " base side: " << p.baseSide << endl
        << (Object3D&)p;
    return o;
}
