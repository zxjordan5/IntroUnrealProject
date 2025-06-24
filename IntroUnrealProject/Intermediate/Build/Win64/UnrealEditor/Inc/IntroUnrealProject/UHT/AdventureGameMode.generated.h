// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AdventureGameMode.h"

#ifdef INTROUNREALPROJECT_AdventureGameMode_generated_h
#error "AdventureGameMode.generated.h already included, missing '#pragma once' in AdventureGameMode.h"
#endif
#define INTROUNREALPROJECT_AdventureGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAdventureGameMode *******************************************************
INTROUNREALPROJECT_API UClass* Z_Construct_UClass_AAdventureGameMode_NoRegister();

#define FID_IntroUnrealProject_Source_IntroUnrealProject_AdventureGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdventureGameMode(); \
	friend struct Z_Construct_UClass_AAdventureGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTROUNREALPROJECT_API UClass* Z_Construct_UClass_AAdventureGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AAdventureGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntroUnrealProject"), Z_Construct_UClass_AAdventureGameMode_NoRegister) \
	DECLARE_SERIALIZER(AAdventureGameMode)


#define FID_IntroUnrealProject_Source_IntroUnrealProject_AdventureGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdventureGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAdventureGameMode(AAdventureGameMode&&) = delete; \
	AAdventureGameMode(const AAdventureGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdventureGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdventureGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdventureGameMode) \
	NO_API virtual ~AAdventureGameMode();


#define FID_IntroUnrealProject_Source_IntroUnrealProject_AdventureGameMode_h_12_PROLOG
#define FID_IntroUnrealProject_Source_IntroUnrealProject_AdventureGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IntroUnrealProject_Source_IntroUnrealProject_AdventureGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_IntroUnrealProject_Source_IntroUnrealProject_AdventureGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAdventureGameMode;

// ********** End Class AAdventureGameMode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IntroUnrealProject_Source_IntroUnrealProject_AdventureGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
