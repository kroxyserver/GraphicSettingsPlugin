// Copyright Kunal Patil (kroxyserver). All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GraphicSettingsSubsystem.generated.h"

UENUM(BlueprintType)
enum EGraphicSettingsType : uint8
{
	AntiAliasing		UMETA(DisplayName = "Anti-Aliasing"),
	Foliage				UMETA(DisplayName = "Foliage"),
	PostProcessing		UMETA(DisplayName = "Post Processing"),
	Shadow				UMETA(DisplayName = "Shadow"),
	Texture				UMETA(DisplayName = "Texture"),
	VisualEffect		UMETA(DisplayName = "VisualEffect")
};

UENUM(BlueprintType)
enum EGraphicSettingsQuality : uint8
{
	Low					UMETA(DisplayName = "Low"),
	Medium				UMETA(DisplayName = "Medium"),
	High				UMETA(DisplayName = "High"),
	Epic				UMETA(DisplayName = "Epic"),
	Cinematic			UMETA(DisplayName = "Cinematic")
};

UCLASS()
class GRAPHICSETTINGS_API UGraphicSettingsSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "+GraphicSettings|Subsystem")
	void SetAntiAliasingQuality(EGraphicSettingsQuality Quality);

	UFUNCTION(BlueprintCallable, Category = "+GraphicSettings|Subsystem")
	void SetFoliageQuality(EGraphicSettingsQuality Quality);

	UFUNCTION(BlueprintCallable, Category = "+GraphicSettings|Subsystem")
	void SetPostProcessingQuality(EGraphicSettingsQuality Quality);

	UFUNCTION(BlueprintCallable, Category = "+GraphicSettings|Subsystem")
	void SetShadowQuality(EGraphicSettingsQuality Quality);

	UFUNCTION(BlueprintCallable, Category = "+GraphicSettings|Subsystem")
	void SetTextureQuality(EGraphicSettingsQuality Quality);

	UFUNCTION(BlueprintCallable, Category = "+GraphicSettings|Subsystem")
	void SetVisualEffectQuality(EGraphicSettingsQuality Quality);
};