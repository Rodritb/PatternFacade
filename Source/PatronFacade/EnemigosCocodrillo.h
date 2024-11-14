// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigos.h"
#include "EnemigosCocodrillo.generated.h"

/**
 *
 */
UCLASS()
class PATRONFACADE_API AEnemigosCocodrillo : public AEnemigos
{
	GENERATED_BODY()

public:
	AEnemigosCocodrillo();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

public:
	void Obligacion() override;
	FString TripulacionEnemiga() override;
};
