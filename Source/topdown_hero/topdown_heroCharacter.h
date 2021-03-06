// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "topdown_heroCharacter.generated.h"

UCLASS(Blueprintable)
class Atopdown_heroCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	Atopdown_heroCharacter();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns CursorToWorld subobject **/
	FORCEINLINE class UDecalComponent* GetCursorToWorld() { return CursorToWorld; }

private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** A decal that projects to the cursor location. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UDecalComponent* CursorToWorld;

	//Input variables
	FVector KeyboardMovementInput;

	// Inventory
	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadOnly, Category = Gameplay, meta = (AllowPrivateAccess = "true"))
	int PickUpCount;

public:
	void MoveForward(float axisValue);
	void MoveRight(float axisValue);
	void PickUpObjects();

	UFUNCTION(Server, Reliable)
	void ServerPickUpObjects();

	// Required for having any property that is Replicated
	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const override;
	
	// Required for having any property that is Replicated
	virtual bool IsSupportedForNetworking() const override
	{
		return true;
	}
};

