// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AdventureCharacter.h"

#ifdef INTROUNREALPROJECT_AdventureCharacter_generated_h
#error "AdventureCharacter.generated.h already included, missing '#pragma once' in AdventureCharacter.h"
#endif
#define INTROUNREALPROJECT_AdventureCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAdventureCharacter ******************************************************
INTROUNREALPROJECT_API UClass* Z_Construct_UClass_AAdventureCharacter_NoRegister();

#define FID_IntroUnrealProject_Source_IntroUnrealProject_AdventureCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdventureCharacter(); \
	friend struct Z_Construct_UClass_AAdventureCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTROUNREALPROJECT_API UClass* Z_Construct_UClass_AAdventureCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AAdventureCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntroUnrealProject"), Z_Construct_UClass_AAdventureCharacter_NoRegister) \
	DECLARE_SERIALIZER(AAdventureCharacter)


#define FID_IntroUnrealProject_Source_IntroUnrealProject_AdventureCharacter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAdventureCharacter(AAdventureCharacter&&) = delete; \
	AAdventureCharacter(const AAdventureCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdventureCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdventureCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAdventureCharacter) \
	NO_API virtual ~AAdventureCharacter();


#define FID_IntroUnrealProject_Source_IntroUnrealProject_AdventureCharacter_h_9_PROLOG
#define FID_IntroUnrealProject_Source_IntroUnrealProject_AdventureCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IntroUnrealProject_Source_IntroUnrealProject_AdventureCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_IntroUnrealProject_Source_IntroUnrealProject_AdventureCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAdventureCharacter;

// ********** End Class AAdventureCharacter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IntroUnrealProject_Source_IntroUnrealProject_AdventureCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
