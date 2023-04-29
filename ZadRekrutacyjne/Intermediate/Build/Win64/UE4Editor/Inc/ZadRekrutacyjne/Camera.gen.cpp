// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZadRekrutacyjne/Camera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamera() {}
// Cross Module References
	ZADREKRUTACYJNE_API UClass* Z_Construct_UClass_ACamera_NoRegister();
	ZADREKRUTACYJNE_API UClass* Z_Construct_UClass_ACamera();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ZadRekrutacyjne();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ZADREKRUTACYJNE_API UClass* Z_Construct_UClass_AWanted_NoRegister();
	ZADREKRUTACYJNE_API UClass* Z_Construct_UClass_ASeeker_NoRegister();
// End Cross Module References
	void ACamera::StaticRegisterNativesACamera()
	{
	}
	UClass* Z_Construct_UClass_ACamera_NoRegister()
	{
		return ACamera::StaticClass();
	}
	struct Z_Construct_UClass_ACamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyWanted_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MyWanted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MySeeker_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MySeeker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ZadRekrutacyjne,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Camera.h" },
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera_Statics::NewProp_MyWanted_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_MyWanted = { "MyWanted", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACamera, MyWanted), Z_Construct_UClass_AWanted_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACamera_Statics::NewProp_MyWanted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::NewProp_MyWanted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera_Statics::NewProp_MySeeker_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_MySeeker = { "MySeeker", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACamera, MySeeker), Z_Construct_UClass_ASeeker_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACamera_Statics::NewProp_MySeeker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::NewProp_MySeeker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_MyWanted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_MySeeker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACamera_Statics::ClassParams = {
		&ACamera::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACamera, 3506789471);
	template<> ZADREKRUTACYJNE_API UClass* StaticClass<ACamera>()
	{
		return ACamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACamera(Z_Construct_UClass_ACamera, &ACamera::StaticClass, TEXT("/Script/ZadRekrutacyjne"), TEXT("ACamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
