// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatronFacade/PatronFacadeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatronFacadeGameMode() {}
// Cross Module References
	PATRONFACADE_API UClass* Z_Construct_UClass_APatronFacadeGameMode_NoRegister();
	PATRONFACADE_API UClass* Z_Construct_UClass_APatronFacadeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PatronFacade();
// End Cross Module References
	void APatronFacadeGameMode::StaticRegisterNativesAPatronFacadeGameMode()
	{
	}
	UClass* Z_Construct_UClass_APatronFacadeGameMode_NoRegister()
	{
		return APatronFacadeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APatronFacadeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APatronFacadeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PatronFacade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatronFacadeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PatronFacadeGameMode.h" },
		{ "ModuleRelativePath", "PatronFacadeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APatronFacadeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatronFacadeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APatronFacadeGameMode_Statics::ClassParams = {
		&APatronFacadeGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APatronFacadeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APatronFacadeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APatronFacadeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APatronFacadeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APatronFacadeGameMode, 2221812241);
	template<> PATRONFACADE_API UClass* StaticClass<APatronFacadeGameMode>()
	{
		return APatronFacadeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APatronFacadeGameMode(Z_Construct_UClass_APatronFacadeGameMode, &APatronFacadeGameMode::StaticClass, TEXT("/Script/PatronFacade"), TEXT("APatronFacadeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APatronFacadeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
