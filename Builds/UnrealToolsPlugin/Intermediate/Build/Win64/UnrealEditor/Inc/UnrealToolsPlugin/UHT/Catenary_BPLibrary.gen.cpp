// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealToolsPlugin/Public/BPLibraries/Math/Catenary_BPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatenary_BPLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UNREALTOOLSPLUGIN_API UClass* Z_Construct_UClass_UCatenary();
	UNREALTOOLSPLUGIN_API UClass* Z_Construct_UClass_UCatenary3D();
	UNREALTOOLSPLUGIN_API UClass* Z_Construct_UClass_UCatenary3D_NoRegister();
	UNREALTOOLSPLUGIN_API UClass* Z_Construct_UClass_UCatenary_NoRegister();
	UNREALTOOLSPLUGIN_API UClass* Z_Construct_UClass_UMathfsBPLibrary();
	UNREALTOOLSPLUGIN_API UEnum* Z_Construct_UEnum_UnrealToolsPlugin_EEvaluability();
	UPackage* Z_Construct_UPackage__Script_UnrealToolsPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEvaluability;
	static UEnum* EEvaluability_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEvaluability.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEvaluability.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealToolsPlugin_EEvaluability, (UObject*)Z_Construct_UPackage__Script_UnrealToolsPlugin(), TEXT("EEvaluability"));
		}
		return Z_Registration_Info_UEnum_EEvaluability.OuterSingleton;
	}
	template<> UNREALTOOLSPLUGIN_API UEnum* StaticEnum<EEvaluability>()
	{
		return EEvaluability_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealToolsPlugin_EEvaluability_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealToolsPlugin_EEvaluability_Statics::Enumerators[] = {
		{ "Unknown", (int64)Unknown },
		{ "Catenary", (int64)Catenary },
		{ "LinearVertical", (int64)LinearVertical },
		{ "LineSegment", (int64)LineSegment },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealToolsPlugin_EEvaluability_Statics::Enum_MetaDataParams[] = {
		{ "Catenary.Name", "Catenary" },
		{ "LinearVertical.Name", "LinearVertical" },
		{ "LineSegment.Name", "LineSegment" },
		{ "ModuleRelativePath", "Public/BPLibraries/Math/Catenary_BPLibrary.h" },
		{ "Unknown.Name", "Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealToolsPlugin_EEvaluability_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealToolsPlugin,
		nullptr,
		"EEvaluability",
		"EEvaluability",
		Z_Construct_UEnum_UnrealToolsPlugin_EEvaluability_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealToolsPlugin_EEvaluability_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealToolsPlugin_EEvaluability_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealToolsPlugin_EEvaluability_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UnrealToolsPlugin_EEvaluability()
	{
		if (!Z_Registration_Info_UEnum_EEvaluability.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEvaluability.InnerSingleton, Z_Construct_UEnum_UnrealToolsPlugin_EEvaluability_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEvaluability.InnerSingleton;
	}
	DEFINE_FUNCTION(UCatenary::execEvalDerivByArcLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_s);
		P_GET_PROPERTY(FFloatProperty,Z_Param_a);
		P_GET_PROPERTY(FIntProperty,Z_Param_n);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UCatenary::EvalDerivByArcLength(Z_Param_s,Z_Param_a,Z_Param_n);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCatenary::execEvalXByArcLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_s);
		P_GET_PROPERTY(FFloatProperty,Z_Param_a);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UCatenary::EvalXByArcLength(Z_Param_s,Z_Param_a);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCatenary::execEvalArcLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_a);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UCatenary::EvalArcLength(Z_Param_x,Z_Param_a);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCatenary::execEval)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_a);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UCatenary::Eval(Z_Param_x,Z_Param_a);
		P_NATIVE_END;
	}
	void UCatenary::StaticRegisterNativesUCatenary()
	{
		UClass* Class = UCatenary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Eval", &UCatenary::execEval },
			{ "EvalArcLength", &UCatenary::execEvalArcLength },
			{ "EvalDerivByArcLength", &UCatenary::execEvalDerivByArcLength },
			{ "EvalXByArcLength", &UCatenary::execEvalXByArcLength },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCatenary_Eval_Statics
	{
		struct Catenary_eventEval_Parms
		{
			float x;
			float a;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_a_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_a;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCatenary_Eval_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCatenary_Eval_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Catenary_eventEval_Parms, x), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary_Eval_Statics::NewProp_x_MetaData), Z_Construct_UFunction_UCatenary_Eval_Statics::NewProp_x_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCatenary_Eval_Statics::NewProp_a_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCatenary_Eval_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Catenary_eventEval_Parms, a), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary_Eval_Statics::NewProp_a_MetaData), Z_Construct_UFunction_UCatenary_Eval_Statics::NewProp_a_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCatenary_Eval_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Catenary_eventEval_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCatenary_Eval_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatenary_Eval_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatenary_Eval_Statics::NewProp_a,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatenary_Eval_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCatenary_Eval_Statics::Function_MetaDataParams[] = {
		{ "Category", "Catenary" },
		{ "Comment", "//Returns the y coordinate of a catenary at the given x value\n//The x coordinate to evaluate at\n//The a - parameter of the catenary\n" },
		{ "ModuleRelativePath", "Public/BPLibraries/Math/Catenary_BPLibrary.h" },
		{ "ToolTip", "Returns the y coordinate of a catenary at the given x value\nThe x coordinate to evaluate at\nThe a - parameter of the catenary" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCatenary_Eval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCatenary, nullptr, "Eval", nullptr, nullptr, Z_Construct_UFunction_UCatenary_Eval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary_Eval_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCatenary_Eval_Statics::Catenary_eventEval_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary_Eval_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCatenary_Eval_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary_Eval_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCatenary_Eval_Statics::Catenary_eventEval_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCatenary_Eval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCatenary_Eval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCatenary_EvalArcLength_Statics
	{
		struct Catenary_eventEvalArcLength_Parms
		{
			float x;
			float a;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_a_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_a;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Catenary_eventEvalArcLength_Parms, x), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::NewProp_x_MetaData), Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::NewProp_x_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::NewProp_a_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Catenary_eventEvalArcLength_Parms, a), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::NewProp_a_MetaData), Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::NewProp_a_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Catenary_eventEvalArcLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::NewProp_a,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Catenary" },
		{ "Comment", "//Evaluates the arc length from the apex of the catenary, to the given x coordinate\n" },
		{ "ModuleRelativePath", "Public/BPLibraries/Math/Catenary_BPLibrary.h" },
		{ "ToolTip", "Evaluates the arc length from the apex of the catenary, to the given x coordinate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCatenary, nullptr, "EvalArcLength", nullptr, nullptr, Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::Catenary_eventEvalArcLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::Catenary_eventEvalArcLength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCatenary_EvalArcLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCatenary_EvalArcLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics
	{
		struct Catenary_eventEvalDerivByArcLength_Parms
		{
			float s;
			float a;
			int32 n;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_s_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_s;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_a_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_a;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_n_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_n;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::NewProp_s_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::NewProp_s = { "s", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Catenary_eventEvalDerivByArcLength_Parms, s), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::NewProp_s_MetaData), Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::NewProp_s_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::NewProp_a_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Catenary_eventEvalDerivByArcLength_Parms, a), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::NewProp_a_MetaData), Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::NewProp_a_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::NewProp_n_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::NewProp_n = { "n", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Catenary_eventEvalDerivByArcLength_Parms, n), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::NewProp_n_MetaData), Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::NewProp_n_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Catenary_eventEvalDerivByArcLength_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::NewProp_s,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::NewProp_a,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::NewProp_n,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Catenary" },
		{ "Comment", "//Evaluates the n:th 2D derivative at the given arc length relative to the apex of the catenary.\n" },
		{ "CPP_Default_n", "1" },
		{ "ModuleRelativePath", "Public/BPLibraries/Math/Catenary_BPLibrary.h" },
		{ "ToolTip", "Evaluates the n:th 2D derivative at the given arc length relative to the apex of the catenary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCatenary, nullptr, "EvalDerivByArcLength", nullptr, nullptr, Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::Catenary_eventEvalDerivByArcLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::Catenary_eventEvalDerivByArcLength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCatenary_EvalDerivByArcLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCatenary_EvalDerivByArcLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics
	{
		struct Catenary_eventEvalXByArcLength_Parms
		{
			float s;
			float a;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_s_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_s;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_a_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_a;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::NewProp_s_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::NewProp_s = { "s", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Catenary_eventEvalXByArcLength_Parms, s), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::NewProp_s_MetaData), Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::NewProp_s_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::NewProp_a_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Catenary_eventEvalXByArcLength_Parms, a), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::NewProp_a_MetaData), Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::NewProp_a_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Catenary_eventEvalXByArcLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::NewProp_s,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::NewProp_a,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Catenary" },
		{ "Comment", "//Evaluates the x coordinate at the given arc length relative to the apex of the catenary.\n" },
		{ "ModuleRelativePath", "Public/BPLibraries/Math/Catenary_BPLibrary.h" },
		{ "ToolTip", "Evaluates the x coordinate at the given arc length relative to the apex of the catenary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCatenary, nullptr, "EvalXByArcLength", nullptr, nullptr, Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::Catenary_eventEvalXByArcLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::Catenary_eventEvalXByArcLength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCatenary_EvalXByArcLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCatenary_EvalXByArcLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCatenary);
	UClass* Z_Construct_UClass_UCatenary_NoRegister()
	{
		return UCatenary::StaticClass();
	}
	struct Z_Construct_UClass_UCatenary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCatenary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMathfsBPLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealToolsPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCatenary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCatenary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCatenary_Eval, "Eval" }, // 3840516765
		{ &Z_Construct_UFunction_UCatenary_EvalArcLength, "EvalArcLength" }, // 1505180848
		{ &Z_Construct_UFunction_UCatenary_EvalDerivByArcLength, "EvalDerivByArcLength" }, // 3903990018
		{ &Z_Construct_UFunction_UCatenary_EvalXByArcLength, "EvalXByArcLength" }, // 4136638698
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCatenary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatenary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BPLibraries/Math/Catenary_BPLibrary.h" },
		{ "ModuleRelativePath", "Public/BPLibraries/Math/Catenary_BPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCatenary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCatenary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCatenary_Statics::ClassParams = {
		&UCatenary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCatenary_Statics::Class_MetaDataParams), Z_Construct_UClass_UCatenary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCatenary()
	{
		if (!Z_Registration_Info_UClass_UCatenary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCatenary.OuterSingleton, Z_Construct_UClass_UCatenary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCatenary.OuterSingleton;
	}
	template<> UNREALTOOLSPLUGIN_API UClass* StaticClass<UCatenary>()
	{
		return UCatenary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCatenary);
	UCatenary::~UCatenary() {}
	DEFINE_FUNCTION(UCatenary3D::execCreateCatenarySplinePoints)
	{
		P_GET_STRUCT(FVector,Z_Param_startPoint);
		P_GET_STRUCT(FVector,Z_Param_endPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Slack);
		P_GET_PROPERTY(FIntProperty,Z_Param_m_steps);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UCatenary3D::CreateCatenarySplinePoints(Z_Param_startPoint,Z_Param_endPoint,Z_Param_Slack,Z_Param_m_steps);
		P_NATIVE_END;
	}
	void UCatenary3D::StaticRegisterNativesUCatenary3D()
	{
		UClass* Class = UCatenary3D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateCatenarySplinePoints", &UCatenary3D::execCreateCatenarySplinePoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics
	{
		struct Catenary3D_eventCreateCatenarySplinePoints_Parms
		{
			FVector startPoint;
			FVector endPoint;
			float Slack;
			int32 m_steps;
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_startPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_endPoint;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Slack;
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_steps;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::NewProp_startPoint = { "startPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Catenary3D_eventCreateCatenarySplinePoints_Parms, startPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::NewProp_endPoint = { "endPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Catenary3D_eventCreateCatenarySplinePoints_Parms, endPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::NewProp_Slack = { "Slack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Catenary3D_eventCreateCatenarySplinePoints_Parms, Slack), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::NewProp_m_steps = { "m_steps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Catenary3D_eventCreateCatenarySplinePoints_Parms, m_steps), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Catenary3D_eventCreateCatenarySplinePoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::NewProp_startPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::NewProp_endPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::NewProp_Slack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::NewProp_m_steps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Catenary3D" },
		{ "CPP_Default_m_steps", "10" },
		{ "ModuleRelativePath", "Public/BPLibraries/Math/Catenary_BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCatenary3D, nullptr, "CreateCatenarySplinePoints", nullptr, nullptr, Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::Catenary3D_eventCreateCatenarySplinePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::Catenary3D_eventCreateCatenarySplinePoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCatenary3D);
	UClass* Z_Construct_UClass_UCatenary3D_NoRegister()
	{
		return UCatenary3D::StaticClass();
	}
	struct Z_Construct_UClass_UCatenary3D_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCatenary3D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCatenary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealToolsPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCatenary3D_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCatenary3D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCatenary3D_CreateCatenarySplinePoints, "CreateCatenarySplinePoints" }, // 1637666698
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCatenary3D_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatenary3D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BPLibraries/Math/Catenary_BPLibrary.h" },
		{ "ModuleRelativePath", "Public/BPLibraries/Math/Catenary_BPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCatenary3D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCatenary3D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCatenary3D_Statics::ClassParams = {
		&UCatenary3D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCatenary3D_Statics::Class_MetaDataParams), Z_Construct_UClass_UCatenary3D_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCatenary3D()
	{
		if (!Z_Registration_Info_UClass_UCatenary3D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCatenary3D.OuterSingleton, Z_Construct_UClass_UCatenary3D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCatenary3D.OuterSingleton;
	}
	template<> UNREALTOOLSPLUGIN_API UClass* StaticClass<UCatenary3D>()
	{
		return UCatenary3D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCatenary3D);
	UCatenary3D::~UCatenary3D() {}
	struct Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_Math_Catenary_BPLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_Math_Catenary_BPLibrary_h_Statics::EnumInfo[] = {
		{ EEvaluability_StaticEnum, TEXT("EEvaluability"), &Z_Registration_Info_UEnum_EEvaluability, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3931711943U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_Math_Catenary_BPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCatenary, UCatenary::StaticClass, TEXT("UCatenary"), &Z_Registration_Info_UClass_UCatenary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCatenary), 1202317081U) },
		{ Z_Construct_UClass_UCatenary3D, UCatenary3D::StaticClass, TEXT("UCatenary3D"), &Z_Registration_Info_UClass_UCatenary3D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCatenary3D), 2092395921U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_Math_Catenary_BPLibrary_h_721795546(TEXT("/Script/UnrealToolsPlugin"),
		Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_Math_Catenary_BPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_Math_Catenary_BPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_Math_Catenary_BPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_soram_Desktop_UnrealToolsPlugin_HostProject_Plugins_UnrealToolsPlugin_Source_UnrealToolsPlugin_Public_BPLibraries_Math_Catenary_BPLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
