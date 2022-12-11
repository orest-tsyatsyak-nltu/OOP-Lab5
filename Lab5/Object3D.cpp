#include "Object3D.h"

string Object3D::getObjectName() const
{
	return "3D Object";
}

ostream& operator<<(ostream& o, const Object3D& obj)
{
	o << obj.getObjectName() + " surface area : " << obj.getSurfaceArea() << endl
		<< obj.getObjectName() + " volume: " << obj.getVolume();
	return o;
}
