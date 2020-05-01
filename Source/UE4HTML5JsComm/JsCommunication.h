// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "JsCommunication.generated.h"

/**
 * 
 */
UCLASS()
class UE4HTML5JSCOMM_API UJsCommunication : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "JSCommunication")
	static void JSSend();
};
