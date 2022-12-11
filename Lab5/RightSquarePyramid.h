#pragma once

#include "Object3D.h"
#include "math.h"

class RightSquarePyramid : public Object3D
{

	double height = 0;

	double baseSide = 0;

public:

	RightSquarePyramid();

	RightSquarePyramid(double height, double baseSide);

	double getAreaOfBase() const;

	double getApotheme() const;

	double getSideSurfaceArea() const;

	virtual double getSurfaceArea() const override;

	virtual double getVolume() const override;

	virtual string getObjectName() const override;

	friend ostream& operator<< (ostream& o, const RightSquarePyramid& p);

};
