#pragma once
#include"CollisionPrimitive.h"

class Collision
{
public:
	//‹…‚Æ•½–Ê
	static	bool CheckSphere2Plane(const Sphere& sphere, const Plane& plane, Vector3* inter = nullptr);
	//ƒŒƒC‚Æ•½–Ê
	static	bool CheckRay2Plane(const Ray& ray, const Plane& plane, float* distance, Vector3* inter = nullptr);
};

