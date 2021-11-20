// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BT_TreeBuilder.generated.h"

/**
 * 
 */
UCLASS()
class DECISIONMAKER_API UBT_TreeBuilder : public UObject
{
	GENERATED_BODY()
	
public:
	void BuildTree();
	void Run();
};
