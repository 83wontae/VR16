// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ShootingHUD.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGCODEGAME_API AShootingHUD : public AHUD
{
	GENERATED_BODY()

public:
	// To add mapping context
	virtual void BeginPlay();

public:
	void BindMyPlayerState();

	void OnUpdateMyHp(float CurHp, float MaxHp);
	
public:
	// TSubclassOf : ������ Ŭ������ Ŭ������ ����� ��� Ŭ������ ���� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UUserWidget> HudWidgetClass;

	UPROPERTY(BlueprintReadWrite)
	UUserWidget* HudWidget;
};
