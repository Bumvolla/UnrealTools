//#pragma once
//
//USTRUCT(BlueprintType)
//struct FCatenaryToPoint
//{
//	GENERATED_USTRUCT_BODY()
//public:
//
//	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Data")
//	int INTERVAL_SEARCH_ITERATIONS = 12;
//	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Data")
//	int BISECT_REFINE_COUNT = 14;
//
//	// data
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
//	FVector2D p;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
//	float s;
//
//	// cached state
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CachedState")
//	TEnumAsByte<EEvaluability> Evaluability;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CachedState")
//	float a;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CachedState")
//	FVector2D delta;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CachedState")
//	float arcLenSampleOffset;
//
//	bool IsVertical(){abs(p.X) < 0.001f; }
//	bool IsAStraightLine(){s <= p.Size() * 1.00005f;}
//		
//
//};