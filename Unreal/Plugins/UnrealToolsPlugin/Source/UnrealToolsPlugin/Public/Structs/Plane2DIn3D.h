//#pragma once
//
//struct FPlane2DIn3D
//{
//
//public:
//
//	FVector origin;
//	FVector axisX;
//	FVector axisY;
//
//	FVector2D RotateAroundYToInclude(FVector p)
//	{
//		FVector pRel = p - origin;
//		float yProj = FVector.Dot(axisY, pRel);
//		axisX = (pRel - axisY * yProj).normalized;
//		float xProj = FVector.Dot(axisX, pRel);
//		return new FVector2D(xProj, yProj);
//	}
//
//protected:
//	static Plane2DIn3D XY = new(default, FVector.right, FVector3UpVector);
//	static Plane2DIn3D YZ = new(default, Vector3.up, Vector3.forward);
//	static Plane2DIn3D ZX = new(default, Vector3.forward, Vector3.right);
//
//};