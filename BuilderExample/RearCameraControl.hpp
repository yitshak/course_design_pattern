#pragma once

#include <iostream>

#include "CameraControlIfs.hpp"

class RearCameraControl : public CameraControlIfs {

public:
	virtual void Activate(void) {
		std::cout << "Rear Camera Activate" << std::endl;
	}
	virtual void PerformAWB(void) {
		std::cout << "Rear Camera AWB" << std::endl;
	}
};

class RearCameraControlBuilder : public CameraControlBuilderIfs {

public:
	RearCameraControlBuilder(void) {
		cameraControl_ = new RearCameraControl();
	};
};