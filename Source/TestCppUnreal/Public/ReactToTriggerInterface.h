#pragma once
 
#include "ReactToTriggerInterface.generated.h"
 
/*
Empty class for reflection system visibility.
Uses the UINTERFACE macro.
Inherits from UInterface.
*/
UINTERFACE(MinimalAPI, BlueprintType)
class UReactToTriggerInterface : public UInterface
{
	GENERATED_BODY()
};
 
/* Actual Interface declaration. */
class IReactToTriggerInterface
{
	GENERATED_BODY()
 
public:
	/* A version of the React To Trigger function that can be implemented in C++ or Blueprint. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool ReactToTrigger();

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void TestInterfaceCall();

};