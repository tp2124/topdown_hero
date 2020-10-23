// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "topdown_hero/topdown_heroGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetopdown_heroGameMode() {}
// Cross Module References
	TOPDOWN_HERO_API UClass* Z_Construct_UClass_Atopdown_heroGameMode_NoRegister();
	TOPDOWN_HERO_API UClass* Z_Construct_UClass_Atopdown_heroGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_topdown_hero();
// End Cross Module References
	void Atopdown_heroGameMode::StaticRegisterNativesAtopdown_heroGameMode()
	{
	}
	UClass* Z_Construct_UClass_Atopdown_heroGameMode_NoRegister()
	{
		return Atopdown_heroGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Atopdown_heroGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Atopdown_heroGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_topdown_hero,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Atopdown_heroGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "topdown_heroGameMode.h" },
		{ "ModuleRelativePath", "topdown_heroGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Atopdown_heroGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Atopdown_heroGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Atopdown_heroGameMode_Statics::ClassParams = {
		&Atopdown_heroGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_Atopdown_heroGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Atopdown_heroGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Atopdown_heroGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Atopdown_heroGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Atopdown_heroGameMode, 3033175320);
	template<> TOPDOWN_HERO_API UClass* StaticClass<Atopdown_heroGameMode>()
	{
		return Atopdown_heroGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Atopdown_heroGameMode(Z_Construct_UClass_Atopdown_heroGameMode, &Atopdown_heroGameMode::StaticClass, TEXT("/Script/topdown_hero"), TEXT("Atopdown_heroGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Atopdown_heroGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
