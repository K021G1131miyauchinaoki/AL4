#pragma once

#include<DirectXMath.h>

class Object3d;
class BaseCollider;

struct  CollisionInfo
{
public:
	CollisionInfo(Object3d* object, BaseCollider* collider, const DirectX::XMVECTOR& inter) {
		this->object = object;
		this->collider = collider;
		this->inter = inter;

	}
	//�Փˑ���̃I�u�W�F
	Object3d* object;
	//�Փˑ���̃R���C�_�[
	BaseCollider* collider;
	//�Փ˓_
	DirectX::XMVECTOR inter;

};

