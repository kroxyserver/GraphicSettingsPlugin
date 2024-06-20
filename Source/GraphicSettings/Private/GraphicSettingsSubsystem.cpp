// Copyright Kunal Patil (kroxyserver). All Rights Reserved.

#include "GraphicSettingsSubsystem.h"

#include "GameFramework/GameUserSettings.h"

void UGraphicSettingsSubsystem::SetAntiAliasingQuality(EGraphicSettingsQuality Quality)
{
	GEngine->GameUserSettings->SetAntiAliasingQuality((int32)Quality);

	GEngine->GameUserSettings->ApplySettings(true);
}

void UGraphicSettingsSubsystem::SetFoliageQuality(EGraphicSettingsQuality Quality)
{
	GEngine->GameUserSettings->SetFoliageQuality((int32)Quality);

	GEngine->GameUserSettings->ApplySettings(true);
}

void UGraphicSettingsSubsystem::SetPostProcessingQuality(EGraphicSettingsQuality Quality)
{
	GEngine->GameUserSettings->SetPostProcessingQuality((int32)Quality);

	GEngine->GameUserSettings->ApplySettings(true);
}

void UGraphicSettingsSubsystem::SetShadowQuality(EGraphicSettingsQuality Quality)
{
	GEngine->GameUserSettings->SetShadowQuality((int32)Quality);

	GEngine->GameUserSettings->ApplySettings(true);
}

void UGraphicSettingsSubsystem::SetTextureQuality(EGraphicSettingsQuality Quality)
{
	GEngine->GameUserSettings->SetTextureQuality((int32)Quality);

	GEngine->GameUserSettings->ApplySettings(true);
}

void UGraphicSettingsSubsystem::SetVisualEffectQuality(EGraphicSettingsQuality Quality)
{
	GEngine->GameUserSettings->SetVisualEffectQuality((int32)Quality);

	GEngine->GameUserSettings->ApplySettings(true);
}