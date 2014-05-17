

#include "Surveillance.h"
#include "UWasObjectRendered.h"


UUWasObjectRendered::UUWasObjectRendered(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{

}


bool UUWasObjectRendered::WasActorRendered(AActor * actor)
{
    return actor->GetLastRenderTime() - 0.2f < GCurrentTime;
}