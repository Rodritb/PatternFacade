// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigosCocodrillo.h"

AEnemigosCocodrillo::AEnemigosCocodrillo()
{

    PrimaryActorTick.bCanEverTick = true;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> Malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
    if (Malla.Succeeded())
    {
        MeshFacade->SetStaticMesh(Malla.Object);
    }
}

void AEnemigosCocodrillo::BeginPlay()
{
    Super::BeginPlay();
}

void AEnemigosCocodrillo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AEnemigosCocodrillo::Obligacion()
{
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Silver,
        FString::Printf(TEXT("%s, cocodrillo nadando en el lago"), *TripulacionEnemiga()));
}

FString AEnemigosCocodrillo::TripulacionEnemiga()
{
    return " Enemigo cocodrillo";
}