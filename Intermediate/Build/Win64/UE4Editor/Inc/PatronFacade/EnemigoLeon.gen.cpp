// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatronFacade/EnemigoLeon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoLeon() {}
// Cross Module References
	PATRONFACADE_API UClass* Z_Construct_UClass_AEnemigoLeon_NoRegister();
	PATRONFACADE_API UClass* Z_Construct_UClass_AEnemigoLeon();
	PATRONFACADE_API UClass* Z_Construct_UClass_AEnemigos();
	UPackage* Z_Construct_UPackage__Script_PatronFacade();
// End Cross Module References
	void AEnemigoLeon::StaticRegisterNativesAEnemigoLeon()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoLeon_NoRegister()
	{
		return AEnemigoLeon::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoLeon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoLeon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigos,
		(UObject* (*)())Z_Construct_UPackage__Script_PatronFacade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoLeon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "EnemigoLeon.h" },
		{ "ModuleRelativePath", "EnemigoLeon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoLeon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoLeon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoLeon_Statics::ClassParams = {
		&AEnemigoLeon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoLeon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoLeon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoLeon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoLeon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoLeon, 2296306309);
	template<> PATRONFACADE_API UClass* StaticClass<AEnemigoLeon>()
	{
		return AEnemigoLeon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoLeon(Z_Construct_UClass_AEnemigoLeon, &AEnemigoLeon::StaticClass, TEXT("/Script/PatronFacade"), TEXT("AEnemigoLeon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoLeon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
