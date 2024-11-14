// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoLeon.h"

AEnemigoLeon::AEnemigoLeon()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> Malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (Malla.Succeeded())
	{
		MeshFacade->SetStaticMesh(Malla.Object);
	}
}

void AEnemigoLeon::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoLeon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoLeon::Obligacion()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Silver,
		FString::Printf(TEXT("%s, Enemigos leon atacando"), *TripulacionEnemiga()));
}

FString AEnemigoLeon::TripulacionEnemiga()
{
	return " Enemigo leon";
}