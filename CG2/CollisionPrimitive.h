#pragma once

#include<DirectXMath.h>
#include"Vector3.h"

//��
struct Sphere
{
	//���S���W
	Vector3 center = { 0,0,0 };
	//���a
	float radius = 1.0f;
};
//����
struct Plane
{
	//�@���x�N�g��
	Vector3 normal = { 0,1,0 };
	//���_����̋���
	float distance = 0.0f;
};

//���C�i�������j
struct Ray
{
	//�n�_���W
	Vector3  start = { 0,0,0 };
	//����
	Vector3  dir = { 1,0,0 };
};