// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigosLeon.h"

AEnemigosLeon::AEnemigosLeon()
{
    PrimaryActorTick.bCanEverTick = true;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> Malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
    if (Malla.Succeeded())
    {
        MeshFacade->SetStaticMesh(Malla.Object);
    }
}

void AEnemigosLeon::BeginPlay()
{
    Super::BeginPlay();
}

void AEnemigosLeon::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AEnemigosLeon::Obligacion()
{
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Silver,
        FString::Printf(TEXT("%s, enemigos Leones"), *TripulacionEnemiga()));
}

FString AEnemigosLeon::TripulacionEnemiga()
{
    return " Enemigo  leones";
}