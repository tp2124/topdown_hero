// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "topdown_hero/topdown_heroPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetopdown_heroPlayerController() {}
// Cross Module References
	TOPDOWN_HERO_API UClass* Z_Construct_UClass_Atopdown_heroPlayerController_NoRegister();
	TOPDOWN_HERO_API UClass* Z_Construct_UClass_Atopdown_heroPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_topdown_hero();
// End Cross Module References
	void Atopdown_heroPlayerController::StaticRegisterNativesAtopdown_heroPlayerController()
	{
	}
	UClass* Z_Construct_UClass_Atopdown_heroPlayerController_NoRegister()
	{
		return Atopdown_heroPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_Atopdown_heroPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Atopdown_heroPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_topdown_hero,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Atopdown_heroPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "topdown_heroPlayerController.h" },
		{ "ModuleRelativePath", "topdown_heroPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Atopdown_heroPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Atopdown_heroPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Atopdown_heroPlayerController_Statics::ClassParams = {
		&Atopdown_heroPlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_Atopdown_heroPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Atopdown_heroPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Atopdown_heroPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Atopdown_heroPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Atopdown_heroPlayerController, 341843454);
	template<> TOPDOWN_HERO_API UClass* StaticClass<Atopdown_heroPlayerController>()
	{
		return Atopdown_heroPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Atopdown_heroPlayerController(Z_Construct_UClass_Atopdown_heroPlayerController, &Atopdown_heroPlayerController::StaticClass, TEXT("/Script/topdown_hero"), TEXT("Atopdown_heroPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Atopdown_heroPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
