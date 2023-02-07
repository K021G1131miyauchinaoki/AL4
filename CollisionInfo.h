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
	//衝突相手のオブジェ
	Object3d* object;
	//衝突相手のコライダー
	BaseCollider* collider;
	//衝突点
	DirectX::XMVECTOR inter;

};

