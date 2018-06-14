// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <string>
#include <iostream>
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "GettingNamesofCylinders.generated.h"


/**
 * 
 */
UCLASS()
class SWEDBANKAR_API UGettingNamesofCylinders : public UStaticMeshComponent
{
public:
	GENERATED_BODY()

	void getName();
	
	
};
