// Fill out your copyright notice in the Description page of Project Settings.


#include "TelekinesisComponent.h"
#include "GameFramework/Actor.h"
//#include "../../../../UE_5.0EA/Engine/Plugins/VirtualProduction/RemoteControl/Source/RemoteControl/Private/RemoteControlPreset.cpp"

// Sets default values for this component's properties
UTelekinesisComponent::UTelekinesisComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTelekinesisComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTelekinesisComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

//void TelekinesisF() {

	//AActor* MyOwner = GetOwner();


//}