#pragma once

#define _USE_MATH_DEFINES

#include "Object3D.h"
#include <math.h>

class Sphere : public Object3D
{

	double radius = 0;

public:

	Sphere();

	Sphere(double radius);

	virtual double getSurfaceArea() const;

	virtual double getVolume() const;

	virtual string getObjectName() const;

	friend ostream& operator<< (ostream& o, const Sphere& sp);

};
