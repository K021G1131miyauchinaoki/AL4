#include "SphereCollider.h"

using namespace DirectX;

void SphereCollider::Update() {
	//���[���h���W�𒊏o
	const XMMATRIX& matWorld = object3d->GetMatWorld();
	//���̃����o�ϐ����X�V
	Sphere::center = matWorld.r[3] + offset;
	Sphere::radius = radius;
}