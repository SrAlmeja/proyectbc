// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProyectBC/ActorShuffle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorShuffle() {}
// Cross Module References
	PROYECTBC_API UClass* Z_Construct_UClass_AActorShuffle_NoRegister();
	PROYECTBC_API UClass* Z_Construct_UClass_AActorShuffle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProyectBC();
// End Cross Module References
	void AActorShuffle::StaticRegisterNativesAActorShuffle()
	{
	}
	UClass* Z_Construct_UClass_AActorShuffle_NoRegister()
	{
		return AActorShuffle::StaticClass();
	}
	struct Z_Construct_UClass_AActorShuffle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActorShuffle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProyectBC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorShuffle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorShuffle.h" },
		{ "ModuleRelativePath", "ActorShuffle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorShuffle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorShuffle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActorShuffle_Statics::ClassParams = {
		&AActorShuffle::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AActorShuffle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActorShuffle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActorShuffle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActorShuffle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActorShuffle, 1987881326);
	template<> PROYECTBC_API UClass* StaticClass<AActorShuffle>()
	{
		return AActorShuffle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActorShuffle(Z_Construct_UClass_AActorShuffle, &AActorShuffle::StaticClass, TEXT("/Script/ProyectBC"), TEXT("AActorShuffle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorShuffle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
