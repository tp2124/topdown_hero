// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableObject.h"

#include "topdown_hero/topdown_heroCharacter.h"

#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AInteractableObject::AInteractableObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = MeshComp;

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	SphereComp->SetupAttachment(MeshComp);
}

// Called when the game starts or when spawned
void AInteractableObject::BeginPlay()
{
	Super::BeginPlay();
}

void AInteractableObject::PlayEffects() 
{
	ActiveVFX = UGameplayStatics::SpawnEmitterAtLocation(this, PickupFX, GetActorLocation());
}

void AInteractableObject::StopEffects()
{
	if (ActiveVFX) {
		ActiveVFX->Deactivate();
	}
}

void AInteractableObject::UpdateMaterial(bool isInteractable)
{
	MeshComp->SetMaterial(0, isInteractable ? InteractableMaterial : OutOfRangeMaterial);
}

// Called every frame
void AInteractableObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInteractableObject::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	PlayEffects();

	//Atopdown_heroCharacter* character = Cast<Atopdown_heroCharacter>(OtherActor);
	UpdateMaterial(true);
}

void AInteractableObject::NotifyActorEndOverlap(AActor* OtherActor)
{
	Super::NotifyActorEndOverlap(OtherActor);
	StopEffects();

	//Atopdown_heroCharacter* character = Cast<Atopdown_heroCharacter>(OtherActor);
	UpdateMaterial(false);
}

