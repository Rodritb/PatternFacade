// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigos.generated.h"

UCLASS()
class PATRONFACADE_API AEnemigos : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEnemigos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	class UStaticMeshComponent* MeshFacade;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Levantarse();
	void Ejercitarse();
	void Prepararse();
	void Limpieza();
	void Trabajar();
	void Organizar();
	void ApagarLuces();

	void Tarea(const TArray<FString> _Tareas);

	virtual void Obligacion() PURE_VIRTUAL(AEnemigos::Obligacion;);

	virtual FString TripulacionEnemiga() PURE_VIRTUAL(AEnemigos::TituloDeLaTripulacion, return " ";);
private:
	void ValidarTareas(const FString& _tarea);
};