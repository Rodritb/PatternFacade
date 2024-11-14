// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigos.h"
#include "EnemigosLeon.generated.h"

/**
 *
 */
UCLASS()
class PATRONFACADE_API AEnemigosLeon : public AEnemigos
{
	GENERATED_BODY()

public:
	AEnemigosLeon();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

public:
	void Obligacion() override;
	FString TripulacionEnemiga() override;
};