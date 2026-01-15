// Fill out your copyright notice in the Description page of Project Settings.


#include "OrbitalBodyComponent.h"
#include "Integrator.h"

// Sets default values for this component's properties
UOrbitalBodyComponent::UOrbitalBodyComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOrbitalBodyComponent::BeginPlay()
{
	Super::BeginPlay();

	OrbitalVector position_m(InitialPositionUE.X / 100.0, InitialPositionUE.Y / 100.0, InitialPositionUE.Z / 100.0);
	OrbitalVector velocity_m(InitialVelocityUE.X / 100.0, InitialVelocityUE.Y / 100.0, InitialVelocityUE.Z / 100.0);

	

	State = OrbitalState(position_m, velocity_m);

	UE_LOG(LogTemp, Warning,
		TEXT("Initial POS = (%f, %f, %f)"),
		State.GetPosition().x,
		State.GetPosition().y,
		State.GetPosition().z
	);
	
}


// Called every frame
void UOrbitalBodyComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	Integrator::StepEuler(State, DeltaTime);

	const OrbitalVector& pos_m = State.GetPosition();

	FVector pos_cm(pos_m.x * 100.0, pos_m.y * 100.0, pos_m.z * 100.0); 

	UE_LOG(LogTemp, Warning,
		TEXT("VEL = (%f, %f, %f)"),
		State.GetVelocity().x,
		State.GetVelocity().y,
		State.GetVelocity().z
	);

	UE_LOG(LogTemp, Warning,
		TEXT("POS = (%f, %f, %f)"),
		State.GetPosition().x,
		State.GetPosition().y,
		State.GetPosition().z
	);

	GetOwner()->SetActorLocation(pos_cm);
}

