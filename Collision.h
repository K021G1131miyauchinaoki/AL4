#pragma once
#include"CollisionPrimitive.h"

class Collision
{
public:
	//���ƕ���
	static	bool CheckSphere2Plane(const Sphere& sphere, const Plane& plane, DirectX::XMVECTOR* inter = nullptr);
	//�_�ƎO�p�`�̍ŋߐړ_�����߂�
	static	void ClosestPtPoint2Triangle(const DirectX::XMVECTOR& point, const Triangle& triangle, DirectX::XMVECTOR* closest);
	//���ƎO�p�`
	static	bool CheckSphere2Triangle(const Sphere& sphere, const Triangle& triangle, DirectX::XMVECTOR* inter = nullptr);

	//���C�ƕ���
	static	bool CheckRay2Plane(const Ray& ray, const Plane& plane,float *distance, DirectX::XMVECTOR* inter = nullptr);

};

