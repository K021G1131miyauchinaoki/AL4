#pragma once
#include"CollisionPrimitive.h"

class Collision
{
public:
	//���Ƌ�
	static bool CheckSphere2Sphere(const Sphere& sphere1, const Sphere& sphere2, DirectX::XMVECTOR* inter = nullptr);
	//���ƕ���
	static	bool CheckSphere2Plane(const Sphere& sphere, const Plane& plane, DirectX::XMVECTOR* inter = nullptr);
	//�_�ƎO�p�`�̍ŋߐړ_�����߂�
	static	void ClosestPtPoint2Triangle(const DirectX::XMVECTOR& point, const Triangle& triangle, DirectX::XMVECTOR* closest);
	//���ƎO�p�`
	static	bool CheckSphere2Triangle(const Sphere& sphere, const Triangle& triangle, DirectX::XMVECTOR* inter = nullptr);

	//���C�ƕ���
	static	bool CheckRay2Plane(const Ray& ray, const Plane& plane,float *distance, DirectX::XMVECTOR* inter = nullptr);
	//���C�ƎO�p�`
	static	bool CheckRay2Triangle(const Ray& ray, const Triangle& triangle, float* distance, DirectX::XMVECTOR* inter = nullptr);
	//���C�Ƌ�
	static	bool CheckRay2Sphere(const Ray& ray, const Sphere&sphere, float* distance, DirectX::XMVECTOR* inter = nullptr);

};

