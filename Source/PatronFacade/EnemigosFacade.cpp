// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigosFacade.h"
#include "EnemigosCocodrillo.h"
#include "EnemigoLeon.h"
#include "EnemigosLeon.h"

// Sets default values
AEnemigosFacade::AEnemigosFacade()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemigosFacade::BeginPlay()
{
	Super::BeginPlay();


	Creacion = TArray<AEnemigos*>();
	Tareas = TArray<FString>();

	FVector LeonPosicion(1157.0f, -205.0f, 107.0f);
	FVector CocodrilloPosicion(1200.0f, 430.0f, 210.0f);
	FVector LeonesPosicion(1200.0f, -1100.0f, 307.0f);

	AEnemigoLeon* Leon = GetWorld()->SpawnActor<AEnemigoLeon>(AEnemigoLeon::StaticClass(), LeonPosicion, FRotator::ZeroRotator);
	AEnemigosCocodrillo* cocodrillo = GetWorld()->SpawnActor<AEnemigosCocodrillo>(AEnemigosCocodrillo::StaticClass(), CocodrilloPosicion, FRotator::ZeroRotator);
	AEnemigosLeon* Leones = GetWorld()->SpawnActor<AEnemigosLeon>(AEnemigosLeon::StaticClass(), LeonesPosicion, FRotator::ZeroRotator);
	//Add the member to the crew
	Creacion.Add(Leon);
	Creacion.Add(cocodrillo);
	Creacion.Add(Leones);
}

// Called every frame
void AEnemigosFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemigosFacade::PrepararTareas(TArray<AEnemigos*> NuevaCreacion, TArray<FString> NuevasTareas)
{
	for (AEnemigos* Enemigo : NuevaCreacion)
	{
		//Execute the task
		Enemigo->Tarea(NuevasTareas);
	}
}

void AEnemigosFacade::Despertar()
{
	Tareas.Empty();
	Tareas.Add("Es hora de despertar");
	Tareas.Add("Debemos Organizarnos");

	PrepararTareas(Creacion, Tareas);
}

void AEnemigosFacade::PlanDelDia()
{
	Tareas.Empty();
	Tareas.Add("DebemosAtacar");

	PrepararTareas(Creacion, Tareas);
}

void AEnemigosFacade::Descanso()
{
	Tareas.Empty();
	Tareas.Add("Ya es tarde");
	Tareas.Add("Ha DEscansar");
	Tareas.Add("Ha dormir");

	PrepararTareas(Creacion, Tareas);

}