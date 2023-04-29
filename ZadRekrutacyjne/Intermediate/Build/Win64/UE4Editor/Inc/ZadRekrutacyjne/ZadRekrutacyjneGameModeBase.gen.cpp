// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZadRekrutacyjne/ZadRekrutacyjneGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZadRekrutacyjneGameModeBase() {}
// Cross Module References
	ZADREKRUTACYJNE_API UClass* Z_Construct_UClass_AZadRekrutacyjneGameModeBase_NoRegister();
	ZADREKRUTACYJNE_API UClass* Z_Construct_UClass_AZadRekrutacyjneGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ZadRekrutacyjne();
// End Cross Module References
	void AZadRekrutacyjneGameModeBase::StaticRegisterNativesAZadRekrutacyjneGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AZadRekrutacyjneGameModeBase_NoRegister()
	{
		return AZadRekrutacyjneGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AZadRekrutacyjneGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZadRekrutacyjneGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ZadRekrutacyjne,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZadRekrutacyjneGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ZadRekrutacyjneGameModeBase.h" },
		{ "ModuleRelativePath", "ZadRekrutacyjneGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZadRekrutacyjneGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZadRekrutacyjneGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZadRekrutacyjneGameModeBase_Statics::ClassParams = {
		&AZadRekrutacyjneGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AZadRekrutacyjneGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZadRekrutacyjneGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZadRekrutacyjneGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZadRekrutacyjneGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZadRekrutacyjneGameModeBase, 763847559);
	template<> ZADREKRUTACYJNE_API UClass* StaticClass<AZadRekrutacyjneGameModeBase>()
	{
		return AZadRekrutacyjneGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZadRekrutacyjneGameModeBase(Z_Construct_UClass_AZadRekrutacyjneGameModeBase, &AZadRekrutacyjneGameModeBase::StaticClass, TEXT("/Script/ZadRekrutacyjne"), TEXT("AZadRekrutacyjneGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZadRekrutacyjneGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
