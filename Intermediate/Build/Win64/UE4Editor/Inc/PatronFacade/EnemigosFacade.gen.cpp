// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatronFacade/EnemigosFacade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigosFacade() {}
// Cross Module References
	PATRONFACADE_API UClass* Z_Construct_UClass_AEnemigosFacade_NoRegister();
	PATRONFACADE_API UClass* Z_Construct_UClass_AEnemigosFacade();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PatronFacade();
// End Cross Module References
	void AEnemigosFacade::StaticRegisterNativesAEnemigosFacade()
	{
	}
	UClass* Z_Construct_UClass_AEnemigosFacade_NoRegister()
	{
		return AEnemigosFacade::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigosFacade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tareas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tareas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tareas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigosFacade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PatronFacade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigosFacade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigosFacade.h" },
		{ "ModuleRelativePath", "EnemigosFacade.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AEnemigosFacade_Statics::NewProp_Tareas_Inner = { "Tareas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigosFacade_Statics::NewProp_Tareas_MetaData[] = {
		{ "Comment", "//The Tasks to execute\n" },
		{ "ModuleRelativePath", "EnemigosFacade.h" },
		{ "ToolTip", "The Tasks to execute" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemigosFacade_Statics::NewProp_Tareas = { "Tareas", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigosFacade, Tareas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemigosFacade_Statics::NewProp_Tareas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigosFacade_Statics::NewProp_Tareas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigosFacade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigosFacade_Statics::NewProp_Tareas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigosFacade_Statics::NewProp_Tareas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigosFacade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigosFacade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigosFacade_Statics::ClassParams = {
		&AEnemigosFacade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemigosFacade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigosFacade_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigosFacade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigosFacade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigosFacade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigosFacade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigosFacade, 2951153595);
	template<> PATRONFACADE_API UClass* StaticClass<AEnemigosFacade>()
	{
		return AEnemigosFacade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigosFacade(Z_Construct_UClass_AEnemigosFacade, &AEnemigosFacade::StaticClass, TEXT("/Script/PatronFacade"), TEXT("AEnemigosFacade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigosFacade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
