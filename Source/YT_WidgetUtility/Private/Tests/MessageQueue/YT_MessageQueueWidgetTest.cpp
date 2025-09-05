#if WITH_DEV_AUTOMATION_TESTS

#include "Misc/AutomationTest.h"
#include "Tests/AutomationEditorCommon.h"

#include "MessageQueue/YT_MessageQueueMessageWidget.h"
#include "MessageQueue/YT_MessageQueueWidget.h"
#include "YT_Helpers/Public/YT_TestHelpers.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FYTMessageQueueMessageWidgetInstantiationTest, "YT.WidgetUtility.MessageQueue.MessageWidget.Instantiation", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FYTMessageQueueMessageWidgetInstantiationTest::RunTest(const FString& Parameters)
{
    GET_OR_CREATE_TEST_WORLD();

    MAKE_WIDGET(UYT_MessageQueueMessageWidget, MessageWidget);

    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FYTMessageQueueWidgetInstantiationTest, "YT.WidgetUtility.MessageQueue.QueueWidget.Instantiation", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FYTMessageQueueWidgetInstantiationTest::RunTest(const FString& Parameters)
{
    GET_OR_CREATE_TEST_WORLD();

    MAKE_WIDGET(UYT_MessageQueueWidget, QueueWidget);

    return true;
}

#endif // WITH_DEV_AUTOMATION_TESTS
