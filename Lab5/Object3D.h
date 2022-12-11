#pragma once

#include <iostream>
#include <string>

using namespace std;

class Object3D
{
public:

	virtual double getSurfaceArea() const = 0;

	virtual double getVolume() const = 0;

	virtual string getObjectName() const;

	friend ostream& operator<<(ostream& o, const Object3D& obj);

};
