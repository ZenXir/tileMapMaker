// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HUDUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class TILEMAPMAKER_API UHUDUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	//��playerController���ã�����ͼʵ�ֺ���������DetailMenu�е�����
	UFUNCTION(BlueprintImplementableEvent)
		void updataDetailMenuValue(int32 index, int32 x, int32 y, float h, int32 type);

	//��playerController���ã�����ͼʵ�ֺ���������DetailMenu�е�����
	UFUNCTION(BlueprintImplementableEvent)
		void updataDetailWorldSetting(const FString& worldName, int32 xNum, int32 yNum);
	
};
