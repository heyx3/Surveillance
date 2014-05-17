

#include "Surveillance.h"
#include "SurveillanceGameMode.h"
#include "SurveillancePlayerController.h"

ASurveillanceGameMode::ASurveillanceGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	PlayerControllerClass = ASurveillancePlayerController::StaticClass();
}


