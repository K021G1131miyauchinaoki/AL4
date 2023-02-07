#pragma once

#include<DirectXMath.h>

//球
struct Sphere
{
	//中心座標
	DirectX::XMVECTOR center = { 0,0,0,1 };
	//半径
	float radius = 1.0f;
};
//平面
struct Plane
{
	//法線ベクトル
	DirectX::XMVECTOR normal = { 0,1,0,0 };
	//原点からの距離
	float distance = 0.0f;
};

//法線付き三角形
class Triangle
{
public:
	//頂点データ３つ
	DirectX::XMVECTOR p0;
	DirectX::XMVECTOR p1;
	DirectX::XMVECTOR p2;
	//法線ベクトル
	DirectX::XMVECTOR normal;
};

//レイ（半直線）
struct Ray
{
	//始点座標
	DirectX::XMVECTOR  start = { 0,0,0,1 };
	//方向
	DirectX::XMVECTOR  dir = { 1,0,0,0 };

	//
};