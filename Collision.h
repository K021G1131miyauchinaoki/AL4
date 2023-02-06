#pragma once
#include"CollisionPrimitive.h"

class Collision
{
public:
	//���ƕ���
	static	bool CheckAphere2Plane(const Sphere& sphere, const Plane& plane, DirectX::XMVECTOR* inter = nullptr);
	//�_�ƎO�p�`�̍ŋߐړ_�����߂�
	static	void ClosestPtPoint2Triangle(const DirectX::XMVECTOR& point, const Triangle& triangle, DirectX::XMVECTOR* closest);
	//���ƎO�p�`
	static	bool CheckSphere2Triangle(const Sphere& sphere, const Triangle& triangle, DirectX::XMVECTOR* inter = nullptr);

};

