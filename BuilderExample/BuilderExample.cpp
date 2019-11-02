// BuilderExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

#include "FrontCameraControl.hpp"
#include "RearCameraControl.hpp"

int main()
{
	// get front camera control
	CameraControlBuilderIfs * cameraBuilder = nullptr;
	CameraControlIfs * cameraControl = nullptr;

	// Front camera
	cameraBuilder = new FrontCameraControlBuilder();
	cameraBuilder->Construct();
	cameraControl = cameraBuilder->GetCameraControl();
	delete cameraBuilder;
	delete cameraControl;

	// Front camera
	cameraBuilder = new RearCameraControlBuilder();
	cameraBuilder->Construct();
	cameraControl = cameraBuilder->GetCameraControl();
	delete cameraBuilder;
	delete cameraControl;
}

