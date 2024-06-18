// Copyright Kunal Patil (kroxyserver). All Rights Reserved.

#include "GraphicSettingsSubsystem.h"

#include "GameFramework/GameUserSettings.h"

void UGraphicSettingsSubsystem::SetAntiAliasingQuality(EGraphicSettingsQuality Quality)
{
	GEngine->GameUserSettings->SetAntiAliasingQuality(Quality);

	GEngine->GameUserSettings->ApplySettings(true);
}

void UGraphicSettingsSubsystem::SetFoliageQuality(EGraphicSettingsQuality Quality)
{
	GEngine->GameUserSettings->SetFoliageQuality(Quality);

	GEngine->GameUserSettings->ApplySettings(true);
}

void UGraphicSettingsSubsystem::SetPostProcessingQuality(EGraphicSettingsQuality Quality)
{
	GEngine->GameUserSettings->SetPostProcessingQuality(Quality);

	GEngine->GameUserSettings->ApplySettings(true);
}

void UGraphicSettingsSubsystem::SetShadowQuality(EGraphicSettingsQuality Quality)
{
	GEngine->GameUserSettings->SetShadowQuality(Quality);

	GEngine->GameUserSettings->ApplySettings(true);
}

void UGraphicSettingsSubsystem::SetTextureQuality(EGraphicSettingsQuality Quality)
{
	GEngine->GameUserSettings->SetTextureQuality(Quality);

	GEngine->GameUserSettings->ApplySettings(true);
}

void UGraphicSettingsSubsystem::SetVisualEffectQuality(EGraphicSettingsQuality Quality)
{
	GEngine->GameUserSettings->SetVisualEffectQuality(Quality);

	GEngine->GameUserSettings->ApplySettings(true);
}