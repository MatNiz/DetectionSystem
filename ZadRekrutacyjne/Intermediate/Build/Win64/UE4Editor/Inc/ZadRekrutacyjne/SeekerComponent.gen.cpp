// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZadRekrutacyjne/SeekerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeekerComponent() {}
// Cross Module References
	ZADREKRUTACYJNE_API UClass* Z_Construct_UClass_USeekerComponent_NoRegister();
	ZADREKRUTACYJNE_API UClass* Z_Construct_UClass_USeekerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ZadRekrutacyjne();
// End Cross Module References
	void USeekerComponent::StaticRegisterNativesUSeekerComponent()
	{
	}
	UClass* Z_Construct_UClass_USeekerComponent_NoRegister()
	{
		return USeekerComponent::StaticClass();
	}
	struct Z_Construct_UClass_USeekerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectionInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USeekerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ZadRekrutacyjne,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeekerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SeekerComponent.h" },
		{ "ModuleRelativePath", "SeekerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeekerComponent_Statics::NewProp_DetectionDistance_MetaData[] = {
		{ "Category", "SeekerComponent" },
		{ "ModuleRelativePath", "SeekerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USeekerComponent_Statics::NewProp_DetectionDistance = { "DetectionDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USeekerComponent, DetectionDistance), METADATA_PARAMS(Z_Construct_UClass_USeekerComponent_Statics::NewProp_DetectionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USeekerComponent_Statics::NewProp_DetectionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeekerComponent_Statics::NewProp_DetectionInterval_MetaData[] = {
		{ "Category", "SeekerComponent" },
		{ "Comment", "// Time interval for detecting wanted actors\n" },
		{ "ModuleRelativePath", "SeekerComponent.h" },
		{ "ToolTip", "Time interval for detecting wanted actors" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USeekerComponent_Statics::NewProp_DetectionInterval = { "DetectionInterval", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USeekerComponent, DetectionInterval), METADATA_PARAMS(Z_Construct_UClass_USeekerComponent_Statics::NewProp_DetectionInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USeekerComponent_Statics::NewProp_DetectionInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USeekerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeekerComponent_Statics::NewProp_DetectionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USeekerComponent_Statics::NewProp_DetectionInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USeekerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USeekerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USeekerComponent_Statics::ClassParams = {
		&USeekerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USeekerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USeekerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USeekerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USeekerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USeekerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USeekerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USeekerComponent, 2579801036);
	template<> ZADREKRUTACYJNE_API UClass* StaticClass<USeekerComponent>()
	{
		return USeekerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USeekerComponent(Z_Construct_UClass_USeekerComponent, &USeekerComponent::StaticClass, TEXT("/Script/ZadRekrutacyjne"), TEXT("USeekerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USeekerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
