// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntroUnrealProject/AdventureCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAdventureCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
INTROUNREALPROJECT_API UClass* Z_Construct_UClass_AAdventureCharacter();
INTROUNREALPROJECT_API UClass* Z_Construct_UClass_AAdventureCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_IntroUnrealProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAdventureCharacter ******************************************************
void AAdventureCharacter::StaticRegisterNativesAAdventureCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAdventureCharacter;
UClass* AAdventureCharacter::GetPrivateStaticClass()
{
	using TClass = AAdventureCharacter;
	if (!Z_Registration_Info_UClass_AAdventureCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AdventureCharacter"),
			Z_Registration_Info_UClass_AAdventureCharacter.InnerSingleton,
			StaticRegisterNativesAAdventureCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AAdventureCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AAdventureCharacter_NoRegister()
{
	return AAdventureCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAdventureCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AdventureCharacter.h" },
		{ "ModuleRelativePath", "AdventureCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdventureCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAdventureCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_IntroUnrealProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAdventureCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAdventureCharacter_Statics::ClassParams = {
	&AAdventureCharacter::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAdventureCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAdventureCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAdventureCharacter()
{
	if (!Z_Registration_Info_UClass_AAdventureCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAdventureCharacter.OuterSingleton, Z_Construct_UClass_AAdventureCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAdventureCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAdventureCharacter);
AAdventureCharacter::~AAdventureCharacter() {}
// ********** End Class AAdventureCharacter ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_IntroUnrealProject_Source_IntroUnrealProject_AdventureCharacter_h__Script_IntroUnrealProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAdventureCharacter, AAdventureCharacter::StaticClass, TEXT("AAdventureCharacter"), &Z_Registration_Info_UClass_AAdventureCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAdventureCharacter), 1725593628U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IntroUnrealProject_Source_IntroUnrealProject_AdventureCharacter_h__Script_IntroUnrealProject_3245555511(TEXT("/Script/IntroUnrealProject"),
	Z_CompiledInDeferFile_FID_IntroUnrealProject_Source_IntroUnrealProject_AdventureCharacter_h__Script_IntroUnrealProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IntroUnrealProject_Source_IntroUnrealProject_AdventureCharacter_h__Script_IntroUnrealProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
