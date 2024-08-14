#pragma once

namespace INI
{
//Input Settings
extern unsigned long ReloadIniKey;
//Player Settings
extern bool FriendlyFire;
extern bool DisableActionMode;
extern bool DisarmPlayerWhenShot;
extern bool CleanWoundsInWater;
extern bool SprintInsideInteriors;
extern bool AllowWeaponsInsideSafeHouse;
//Player Controls
extern bool DisableAssistedMovement;
extern int DisableCameraAutoCenter;
extern bool ToggleFPSWalking;
extern bool CamFollowVehicleDuringHandbrake;
extern int CamFollowVehDelay;
extern bool DisableFirstPersonView;
extern bool DisableIdleCamera;
extern bool DisableRecording;
extern bool DisableMobilePhone;
//Player Vehicle
extern bool DisableCarMidAirAndRollControl;
extern bool DisableForcedCarExplosionOnImpact;
extern bool DisableEngineSmoke;
extern bool DisableEngineFire;
extern bool LeaveEngineOnWhenExitingVehicles;
extern bool DisableWheelsAutoCenterOnCarExit;
extern bool KeepCarHydraulicsPosition;
extern bool EnableHeliWaterPhysics;
extern bool DisableRagdollOnVehicleRoof;
extern float MaxVehicleSpeed;
extern bool DisableFlyThroughWindscreen;
extern bool DisableBikeKnockOff;
extern bool DisableDragOutCar;
extern bool DisableShallowWaterBikeJumpOut;
extern bool DisableStuntJumps;
//HUD
extern bool AllowGameExecutionOnPauseMenu;
extern bool DisablePauseMenuPostFX;
extern bool DisableHUDPostFX;
extern bool DisableSpecialAbilityPostFX;
extern bool EnableBigMapToggle;
extern float SetRadarZoom;
extern bool DisableMinimapTilt;
extern bool HideMinimapFog;
extern bool HideMinimapSatNav;
extern bool HideMinimapDepth;
extern bool HideMinimapBars;
extern bool AlwaysHideAbilityBar;
extern bool HideAbilityBarForNonMainCharacters;
extern bool ReplaceArmourBarWithStamina;
extern bool MergeHealthAndArmour;
extern bool HideHudComponents;
extern char* HudComponents;
extern bool HideWeaponReticle;
extern bool HideEnemiesBlips;
//Audio
extern bool DisableWantedMusic;
extern bool DisablePoliceScanner;
extern bool DisableFlyingMusic;
extern bool DisableRadioInterruptions;
extern bool DefaultVehicleRadioOff;

//Peds Settings
extern bool DisableWrithe;
extern bool DisableHurt;
extern bool DisableShootFromGround;
extern bool DisableSittingPedsInstantDeath;
extern bool DisarmPedWhenShot;
extern int DisarmChance;
extern bool DisarmIncludeLeftHand;
extern bool DisablePedOnlyDamagedByPlayer;
extern bool DisableDeadPedsJumpOutOfVehicle;
}

void ReadINI();