#include"CollisionPrimitive.h"

bool Collision::CheckRay2Plane(const Ray& ray, const Plane& plane,float* distance, XMVECTOR* inter) {
	const	float	epsilon = 1.0e-5f;//誤差吸収用の微小な値
	//面法線とレイの方向ベクトルの内積
	float d1 = XMVector3Dot(plane.normal, ray.dir).m128_f32[0];
	//裏面には当たらない
	if (d1 > -epsilon) { return false; }
	//始点と原点の距離（平面の法線方向）
	//面法線とレイの視点座標（位置ベクトル）の内積
	float	d2 = XMVector3Dot(plane.normal, ray.start).m128_f32[0];
	//始点と平面の距離（平面の法線方向）
	
	return true;
}