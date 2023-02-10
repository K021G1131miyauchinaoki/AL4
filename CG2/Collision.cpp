#include "Collision.h"

using namespace DirectX;

bool Collision::CheckSphere2Plane(const Sphere& sphere, const Plane& plane, Vector3*inter) {
	//���W�n�̌��_���狅�̒��S���W�ւ̋���
	float distV = Vector3::StaticDot(sphere.center, plane.normal);
	//���ʂ̌��_���������_�����Z���āA���ʂƋ��̒��S�Ƃ̋������o��
	float	dist = distV - plane.distance;
	//�����̐�Βl�����a���傫����Γ������Ă��Ȃ�
	if (fabsf(dist)>sphere.radius)
	{
		return false;
	}
	//�^����_���v�Z
	if (inter)
	{
		//���ʏ�̍ŋߐړ_���A�^����_�Ƃ���
		*inter = -dist * plane.normal + sphere.center;
	}
	return true;
}
bool Collision::CheckRay2Plane(const Ray& ray, const Plane& plane, float* distance, Vector3* inter) {

	const float epsilon = 1.0e-5f;//�덷�z���̔����Ȓl
	//�ʖ@���ƃ��C�̕����x�N�g���̓���
	float	d1 = Vector3::StaticDot(plane.normal, ray.dir);
	//���ʂɂ͓�����Ȃ�
	if (d1 > -epsilon)return false;
	//�ʖ@���ƃ��C�̎n�_���W
	float	d2 = Vector3::StaticDot(plane.normal, ray.start);
	//�n�_�ƕ��ʂ̋���(���ʂ̖@������)
	float dist = d2 - plane.distance;
	//�n�_�ƕ��ʂ̋���(���C����)
	float t = dist / -d1;
	//��_���n�_�����ɂ���̂ŁA������Ȃ�
	if (t < 0)return false;
	//��������������
	if (distance)*distance = t;
	//��_���v�Z
	if (inter)*inter = ray.start + t * ray.dir;

	return true;
}
