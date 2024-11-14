// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigos.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
// Sets default values
AEnemigos::AEnemigos()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshFacade = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigo"));
	RootComponent = MeshFacade;

	SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));

}

// Called when the game starts or when spawned
void AEnemigos::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEnemigos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemigos::Levantarse()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue,
		FString::Printf(TEXT("%s, LEVANTARSE!!!!"), *TripulacionEnemiga()));
}

void AEnemigos::Ejercitarse()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green,
		FString::Printf(TEXT("%s, Ejercicio matutino"), *TripulacionEnemiga()));
}

void AEnemigos::Prepararse()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		FString::Printf(TEXT("%s, VESTIRSE!!!!"), *TripulacionEnemiga()));
}

void AEnemigos::Limpieza()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Orange,
		FString::Printf(TEXT("%s, Aseando"), *TripulacionEnemiga()));
}

void AEnemigos::Trabajar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Emerald,
		FString::Printf(TEXT("%s, Charlando"), *TripulacionEnemiga()));
}

void AEnemigos::Organizar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta,
		FString::Printf(TEXT("%s, Haciendo fila"), *TripulacionEnemiga()));
}

void AEnemigos::ApagarLuces()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan,
		FString::Printf(TEXT("%s, Hora de dormir"), *TripulacionEnemiga()));
}

void AEnemigos::Tarea(const TArray<FString> _Tareas)
{
	for (const FString& mytarea : _Tareas) {
		ValidarTareas(mytarea);
	}
}
void AEnemigos::ValidarTareas(const FString& _tarea) {
	if (_tarea.Equals("Es hora de despertar")) {
		Levantarse();
	}
	else if (_tarea.Equals("Debemos Organizarnos")) {
		Ejercitarse();
	}
	else if (_tarea.Equals("DebemosAtacar")) {
		Limpieza();
	}
	else if (_tarea.Equals("Ya es tarde")) {
		Trabajar();
	}
	else if (_tarea.Equals("Ha DEscansar")) {
		Organizar();
	}
	else if (_tarea.Equals("Ha dormir")) {
		ApagarLuces();
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,
			FString::Printf(TEXT("No existe una tarea")));
	}
}