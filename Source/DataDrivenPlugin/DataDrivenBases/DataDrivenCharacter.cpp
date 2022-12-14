// Fill out your copyright notice in the Description page of Project Settings.


#include "DataDrivenCharacter.h"

#include "DataDrivenPlugin/DataContainer/DataContainerComponent.h"
#include "DataDrivenPlugin/DataContainer/DataDrivenComponentInterface.h"
#include "DataDrivenPlugin/DataDrivenHelpers/DataDrivenHelpers.h"
#include "DataDrivenPlugin/Initialization/InitializableInterface.h"


// Sets default values
ADataDrivenCharacter::ADataDrivenCharacter()
{
}

// Called when the game starts or when spawned
void ADataDrivenCharacter::BeginPlay()
{
	Super::BeginPlay();
	DataContainerComponent->RegisterDataContainer(DataContainer);
	INITIALIZE_COMPONENTS(DataContainerComponent)
}

void ADataDrivenCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	REGISTER_DATA_CONTAINER()
}

