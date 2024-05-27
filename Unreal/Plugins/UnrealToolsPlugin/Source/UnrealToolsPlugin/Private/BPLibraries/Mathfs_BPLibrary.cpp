#include "BPLibraries/Mathfs_BPLibrary.h"
#include "UnrealToolsPlugin.h"

UMathfsBPLibrary::UMathfsBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}



#pragma region Math
float UMathfsBPLibrary::Sinh(const float x)
{
	return FGenericPlatformMath::Sinh(x);
}

float UMathfsBPLibrary::Cosh(const float x)
{
	return FGenericPlatformMath::Cosh(x);
}

float UMathfsBPLibrary::Asinh(const float x)
{
	return x + sqrt(x*x + 1);
}
#pragma endregion
