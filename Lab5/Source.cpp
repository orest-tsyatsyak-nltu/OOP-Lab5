#include "Sphere.h"
#include "RightSquarePyramid.h"

int main() {
	RightSquarePyramid pyramid = RightSquarePyramid(10, 5);
	Sphere sphere = Sphere(5);

	Object3D& pyramidAsObject3D = pyramid;
	Object3D& sphqreAsObject3D = sphere;

	cout << pyramid << endl << endl;
	cout << sphere << endl << endl;

	cout << pyramidAsObject3D << endl << endl;
	cout << sphqreAsObject3D << endl << endl;

	return 0;
}
