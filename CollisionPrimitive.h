#pragma once
#include<DirectXMath.h>

using namespace DirectX;

///<summary>
///平面
///</summary>
struct Plane
{
	//法線ベクトル
	XMVECTOR	normal = { 0,1,0,0 };

	//原点（0，0，0）からの距離
	float	distance = 0.0f;

};

///<summary>
///レイ（半直線）
///</summary>
struct Ray
{
	//始点座標
	XMVECTOR	start = { 0,0,0,1 };

	//方向
	XMVECTOR	dir = { 1,0,0,0 };

};

class Collision
{
public:
	///<summary>
	///レイト平面の当たり判定
	/// </summary>
	/// <param name="lay">レイ</param>
	/// <param name="plane">平面</param>
	/// <param name="inter">距離（出力用）</param>
	/// <param name="inter">交点（出力用）</param>
	/// <returns>交差しているか否か</returns>
	static bool	CheckRay2Plane(const Ray& ray, const Plane& plane,
		float* distance = nullptr, XMVECTOR* inter = nullptr);

};
