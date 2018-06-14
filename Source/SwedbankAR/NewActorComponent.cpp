// Fill out your copyright notice in the Description page of Project Settings.

#include "NewActorComponent.h"


// Sets default values for this component's properties
UNewActorComponent::UNewActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UNewActorComponent::BeginPlay()
{
	Super::BeginPlay();
	TSet<UActorComponent*> Components = GetOwner()->GetComponents();
	TMap<int, FString> BoardComponents;
	size_t cell = 0;

	for (auto& Elem : Components)
	{
		if (Elem->GetReadableName() != "Board_BP.StaticMeshComponent0 Board1" && Elem->GetReadableName() != "Board_BP.test_cyl")
		{
			BoardComponents.Add(cell, Elem->GetReadableName());
			++cell;
		}
	}

	for (auto It = BoardComponents.CreateIterator(); It; ++It)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d is a component %s!"), It->Key, *It->Value);
	}

	// ...
	
}


// Called every frame
void UNewActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

