// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableObject.generated.h"

class USphereComponent;
class UParticleSystem;
class UParticleSystemComponent;
class Atopdown_heroCharacter;

UCLASS()
class TOPDOWN_HERO_API AInteractableObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractableObject();

protected:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
		USphereComponent* SphereComp;

	UPROPERTY(EditDefaultsOnly, Category = "Materials")
	UMaterial* OutOfRangeMaterial;

	UPROPERTY(EditDefaultsOnly, Category = "Materials")
	UMaterial* InteractableMaterial;

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	UParticleSystem* PickupFX;
	UParticleSystemComponent* ActiveVFX;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void PlayEffects();
	void StopEffects();
	void UpdateMaterial(bool isInteractable);
	//bool IsPlayerInRange(const Atopdown_heroCharacter* character) const;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor);

	virtual void NotifyActorEndOverlap(AActor* OtherActor);

};
