#pragma once
#include"CollisionPrimitive.h"

class Collision
{
public:
	//球と球
	static bool CheckSphere2Sphere(const Sphere& sphere1, const Sphere& sphere2, DirectX::XMVECTOR* inter = nullptr);
	//球と平面
	static	bool CheckSphere2Plane(const Sphere& sphere, const Plane& plane, DirectX::XMVECTOR* inter = nullptr);
	//点と三角形の最近接点を求める
	static	void ClosestPtPoint2Triangle(const DirectX::XMVECTOR& point, const Triangle& triangle, DirectX::XMVECTOR* closest);
	//球と三角形
	static	bool CheckSphere2Triangle(const Sphere& sphere, const Triangle& triangle, DirectX::XMVECTOR* inter = nullptr);

	//レイと平面
	static	bool CheckRay2Plane(const Ray& ray, const Plane& plane,float *distance, DirectX::XMVECTOR* inter = nullptr);
	//レイと三角形
	static	bool CheckRay2Triangle(const Ray& ray, const Triangle& triangle, float* distance, DirectX::XMVECTOR* inter = nullptr);
	//レイと球
	static	bool CheckRay2Sphere(const Ray& ray, const Sphere&sphere, float* distance, DirectX::XMVECTOR* inter = nullptr);

};

