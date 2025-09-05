#include "YT_WidgetUtility.h"
#include "YT_WidgetUtilityLogging.h"

#define LOCTEXT_NAMESPACE "FYT_WidgetUtilityModule"

void FYT_WidgetUtilityModule::StartupModule()
{
	UE_LOG(LogYT_WidgetUtility, Log, TEXT("YT_WidgetUtility module started"));
}

void FYT_WidgetUtilityModule::ShutdownModule()
{
	UE_LOG(LogYT_WidgetUtility, Log, TEXT("YT_WidgetUtility module shutdown"));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FYT_WidgetUtilityModule, YT_WidgetUtility)
