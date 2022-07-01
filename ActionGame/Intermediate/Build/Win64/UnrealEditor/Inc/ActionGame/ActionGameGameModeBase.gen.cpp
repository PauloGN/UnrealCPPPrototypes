// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/ActionGameGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionGameGameModeBase() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_AActionGameGameModeBase_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_AActionGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void AActionGameGameModeBase::StaticRegisterNativesAActionGameGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActionGameGameModeBase);
	UClass* Z_Construct_UClass_AActionGameGameModeBase_NoRegister()
	{
		return AActionGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AActionGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActionGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ActionGameGameModeBase.h" },
		{ "ModuleRelativePath", "ActionGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActionGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActionGameGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AActionGameGameModeBase_Statics::ClassParams = {
		&AActionGameGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AActionGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActionGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActionGameGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AActionGameGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActionGameGameModeBase.OuterSingleton, Z_Construct_UClass_AActionGameGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AActionGameGameModeBase.OuterSingleton;
	}
	template<> ACTIONGAME_API UClass* StaticClass<AActionGameGameModeBase>()
	{
		return AActionGameGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActionGameGameModeBase);
	struct Z_CompiledInDeferFile_FID_ActionGame_Source_ActionGame_ActionGameGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionGame_Source_ActionGame_ActionGameGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AActionGameGameModeBase, AActionGameGameModeBase::StaticClass, TEXT("AActionGameGameModeBase"), &Z_Registration_Info_UClass_AActionGameGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActionGameGameModeBase), 2329181031U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionGame_Source_ActionGame_ActionGameGameModeBase_h_797898964(TEXT("/Script/ActionGame"),
		Z_CompiledInDeferFile_FID_ActionGame_Source_ActionGame_ActionGameGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionGame_Source_ActionGame_ActionGameGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
