#pragma once
#include"CollisionPrimitive.h"

class Collision
{
public:
	//球と平面
	static	bool CheckSphere2Plane(const Sphere& sphere, const Plane& plane, Vector3* inter = nullptr);
	//レイと平面
	static	bool CheckRay2Plane(const Ray& ray, const Plane& plane, float* distance, Vector3* inter = nullptr);
};

