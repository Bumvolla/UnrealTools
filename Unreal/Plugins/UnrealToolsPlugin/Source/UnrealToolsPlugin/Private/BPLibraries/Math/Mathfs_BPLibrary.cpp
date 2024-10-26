#include "BPLibraries/Math/Mathfs_BPLibrary.h"
#include "UnrealToolsPlugin.h"

UMathfsBPLibrary::UMathfsBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}




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

void UMathfsBPLibrary::LocalToWorldSpace(FVector LocalPoint, AActor* ReferenceActor, FVector& ReturnValue)
{
	FTransform ActorTransform = ReferenceActor->GetActorTransform();
	ReturnValue = ActorTransform.TransformPosition(LocalPoint);
}

void UMathfsBPLibrary::WorldToLocalSpace(FVector WorldPoint, AActor* ReferenceActor, FVector& ReturnValue)
{
	FTransform ActorTransform = ReferenceActor->GetActorTransform();
	ReturnValue = ActorTransform.InverseTransformPosition(WorldPoint);
}

