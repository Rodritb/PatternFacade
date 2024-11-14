// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PatronFacadeGameMode.generated.h"

UCLASS(minimalapi)
class APatronFacadeGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APatronFacadeGameMode();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

};



