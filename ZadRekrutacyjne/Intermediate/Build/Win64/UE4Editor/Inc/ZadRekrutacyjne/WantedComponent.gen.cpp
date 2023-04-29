// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZadRekrutacyjne/WantedComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWantedComponent() {}
// Cross Module References
	ZADREKRUTACYJNE_API UClass* Z_Construct_UClass_UWantedComponent_NoRegister();
	ZADREKRUTACYJNE_API UClass* Z_Construct_UClass_UWantedComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ZadRekrutacyjne();
// End Cross Module References
	void UWantedComponent::StaticRegisterNativesUWantedComponent()
	{
	}
	UClass* Z_Construct_UClass_UWantedComponent_NoRegister()
	{
		return UWantedComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWantedComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDetected_MetaData[];
#endif
		static void NewProp_isDetected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDetected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distanceFromSeeker_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distanceFromSeeker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWantedComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ZadRekrutacyjne,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWantedComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WantedComponent.h" },
		{ "ModuleRelativePath", "WantedComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWantedComponent_Statics::NewProp_isDetected_MetaData[] = {
		{ "Category", "WantedComponent" },
		{ "ModuleRelativePath", "WantedComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWantedComponent_Statics::NewProp_isDetected_SetBit(void* Obj)
	{
		((UWantedComponent*)Obj)->isDetected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWantedComponent_Statics::NewProp_isDetected = { "isDetected", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWantedComponent), &Z_Construct_UClass_UWantedComponent_Statics::NewProp_isDetected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWantedComponent_Statics::NewProp_isDetected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWantedComponent_Statics::NewProp_isDetected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWantedComponent_Statics::NewProp_distanceFromSeeker_MetaData[] = {
		{ "Category", "WantedComponent" },
		{ "ModuleRelativePath", "WantedComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWantedComponent_Statics::NewProp_distanceFromSeeker = { "distanceFromSeeker", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWantedComponent, distanceFromSeeker), METADATA_PARAMS(Z_Construct_UClass_UWantedComponent_Statics::NewProp_distanceFromSeeker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWantedComponent_Statics::NewProp_distanceFromSeeker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWantedComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWantedComponent_Statics::NewProp_isDetected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWantedComponent_Statics::NewProp_distanceFromSeeker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWantedComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWantedComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWantedComponent_Statics::ClassParams = {
		&UWantedComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWantedComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWantedComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWantedComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWantedComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWantedComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWantedComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWantedComponent, 1220170208);
	template<> ZADREKRUTACYJNE_API UClass* StaticClass<UWantedComponent>()
	{
		return UWantedComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWantedComponent(Z_Construct_UClass_UWantedComponent, &UWantedComponent::StaticClass, TEXT("/Script/ZadRekrutacyjne"), TEXT("UWantedComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWantedComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
