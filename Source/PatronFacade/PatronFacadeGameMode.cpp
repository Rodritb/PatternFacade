// Copyright Epic Games, Inc. All Rights Reserved.

#include "PatronFacadeGameMode.h"
#include "PatronFacadeCharacter.h"
#include "UObject/ConstructorHelpers.h"

#include "EnemigosFacade.h"
#include "EnemigosCocodrillo.h"
#include "EnemigoLeon.h"
#include "EnemigosLeon.h"

APatronFacadeGameMode::APatronFacadeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void APatronFacadeGameMode::BeginPlay()
{
	Super::BeginPlay();
	AEnemigosFacade* Facade = GetWorld()->SpawnActor<AEnemigosFacade>(AEnemigosFacade::StaticClass());

	Facade->Despertar();
	Facade->PlanDelDia();
	Facade->Descanso();


}

void APatronFacadeGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}