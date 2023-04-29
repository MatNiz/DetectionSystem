// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZadRekrutacyjne/Wanted.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWanted() {}
// Cross Module References
	ZADREKRUTACYJNE_API UClass* Z_Construct_UClass_AWanted_NoRegister();
	ZADREKRUTACYJNE_API UClass* Z_Construct_UClass_AWanted();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ZadRekrutacyjne();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ZADREKRUTACYJNE_API UClass* Z_Construct_UClass_UWantedComponent_NoRegister();
// End Cross Module References
	void AWanted::StaticRegisterNativesAWanted()
	{
	}
	UClass* Z_Construct_UClass_AWanted_NoRegister()
	{
		return AWanted::StaticClass();
	}
	struct Z_Construct_UClass_AWanted_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WantedMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WantedMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WantedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WantedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWanted_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ZadRekrutacyjne,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWanted_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Wanted.h" },
		{ "ModuleRelativePath", "Wanted.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWanted_Statics::NewProp_WantedMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Wanted.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWanted_Statics::NewProp_WantedMesh = { "WantedMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWanted, WantedMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWanted_Statics::NewProp_WantedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWanted_Statics::NewProp_WantedMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWanted_Statics::NewProp_WantedComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Wanted.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWanted_Statics::NewProp_WantedComponent = { "WantedComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWanted, WantedComponent), Z_Construct_UClass_UWantedComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWanted_Statics::NewProp_WantedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWanted_Statics::NewProp_WantedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWanted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWanted_Statics::NewProp_WantedMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWanted_Statics::NewProp_WantedComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWanted_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWanted>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWanted_Statics::ClassParams = {
		&AWanted::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWanted_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWanted_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWanted_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWanted_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWanted()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWanted_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWanted, 4275135444);
	template<> ZADREKRUTACYJNE_API UClass* StaticClass<AWanted>()
	{
		return AWanted::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWanted(Z_Construct_UClass_AWanted, &AWanted::StaticClass, TEXT("/Script/ZadRekrutacyjne"), TEXT("AWanted"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWanted);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
