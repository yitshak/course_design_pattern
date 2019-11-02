#pragma once

#pragma once

#include <iostream>

#include "CameraControlIfs.hpp"

class FrontCameraControl: public CameraControlIfs {

public:
	virtual void Activate(void) {
		std::cout << "Front Camera Activate" << std::endl;;
	}
	virtual void PerformAWB(void) {
		std::cout << "Front Camera AWB" << std::endl;
	}
};

class FrontCameraControlBuilder : public CameraControlBuilderIfs {

public:
	FrontCameraControlBuilder(void) {
		cameraControl_ = new FrontCameraControl();
	};
};

