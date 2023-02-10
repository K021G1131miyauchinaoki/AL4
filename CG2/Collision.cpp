#include "Collision.h"

using namespace DirectX;

bool Collision::CheckSphere2Plane(const Sphere& sphere, const Plane& plane, Vector3*inter) {
	//座標系の原点から球の中心座標への距離
	float distV = Vector3::StaticDot(sphere.center, plane.normal);
	//平面の原点距離を原点を減算して、平面と球の中心との距離が出る
	float	dist = distV - plane.distance;
	//距離の絶対値が半径より大きければ当たっていない
	if (fabsf(dist)>sphere.radius)
	{
		return false;
	}
	//疑似交点を計算
	if (inter)
	{
		//平面上の最近接点を、疑似交点とする
		*inter = -dist * plane.normal + sphere.center;
	}
	return true;
}
bool Collision::CheckRay2Plane(const Ray& ray, const Plane& plane, float* distance, Vector3* inter) {

	const float epsilon = 1.0e-5f;//誤差吸収の微小な値
	//面法線とレイの方向ベクトルの内積
	float	d1 = Vector3::StaticDot(plane.normal, ray.dir);
	//裏面には当たらない
	if (d1 > -epsilon)return false;
	//面法線とレイの始点座標
	float	d2 = Vector3::StaticDot(plane.normal, ray.start);
	//始点と平面の距離(平面の法線方向)
	float dist = d2 - plane.distance;
	//始点と平面の距離(レイ方向)
	float t = dist / -d1;
	//交点が始点より後ろにあるので、当たらない
	if (t < 0)return false;
	//距離を書き込む
	if (distance)*distance = t;
	//交点を計算
	if (inter)*inter = ray.start + t * ray.dir;

	return true;
}
