#pragma once

class CameraControlIfs {
public:
	virtual void Activate(void) = 0;
	virtual void PerformAWB(void) = 0;

};

class CameraControlBuilderIfs {
public:
	~CameraControlBuilderIfs(void) {
		delete cameraControl_;
	}
	void Construct(void) {
		if (cameraControl_)
		{
			cameraControl_->Activate();
			cameraControl_->PerformAWB();
		}
	};
	
	CameraControlIfs* GetCameraControl(void) {
		CameraControlIfs * returnValue = cameraControl_;
		cameraControl_ = nullptr;
		return returnValue;
	}

protected:
	CameraControlBuilderIfs(void) :cameraControl_(nullptr) {};
	CameraControlIfs * cameraControl_;
};
