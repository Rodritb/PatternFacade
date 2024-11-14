// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigos.h"
#include "EnemigosFacade.generated.h"


UCLASS()
class PATRONFACADE_API AEnemigosFacade : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEnemigosFacade();
private:
private:
	//The Crew list
	TArray<AEnemigos*> Creacion;
	//The Tasks to execute
	UPROPERTY()
	TArray<FString> Tareas;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	void PrepararTareas(TArray<AEnemigos*> NuevaCreacion, TArray<FString> NuevasTareas);

public:
	void Despertar();
	void PlanDelDia();
	void Descanso();
};
