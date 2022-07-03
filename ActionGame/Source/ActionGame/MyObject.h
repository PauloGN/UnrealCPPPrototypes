// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class ACTIONGAME_API UMyObject : public UObject
{
	GENERATED_BODY()
	
public:

	UMyObject();

public:

	/*
	*	Keywords
	*	BlueprintReadyOnly... etc
	*	https://docs.unrealengine.com/4.27/en-US/ProgrammingAndScripting/GameplayArchitecture/Properties/Specifiers/
	*   https://docs.unrealengine.com/5.0/en-US/ufunctions-in-unreal-engine/
	*/
	UPROPERTY(BlueprintReadWrite, Category = "My Variables")
	float _myFloat;

	UFUNCTION(BlueprintCallable, Category = "My Functions")
	void FloatFunction();

};
