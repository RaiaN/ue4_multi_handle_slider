// Copyright MultiHandleSlider by Peter Leontev

#include "IMultiHandleSlider.h"

class FMultiHandleSlider : public IMultiHandleSlider
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE( FMultiHandleSlider, MultiHandleSlider )



void FMultiHandleSlider::StartupModule()
{
	// This code will execute after your module is loaded into memory (but after global variables are initialized, of course.)
}


void FMultiHandleSlider::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}



