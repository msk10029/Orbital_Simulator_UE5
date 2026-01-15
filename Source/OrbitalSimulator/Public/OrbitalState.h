// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OrbitalVector.h"

/**
 * 
 */
class ORBITALSIMULATOR_API OrbitalState
{
private:
	OrbitalVector position;
	OrbitalVector velocity;

public:
	OrbitalState();
	OrbitalState(const OrbitalVector& r, const OrbitalVector& v);

	const OrbitalVector& GetPosition() const;
	const OrbitalVector& GetVelocity() const;

	void SetPosition(const OrbitalVector& r);
	void SetVelocity(const OrbitalVector& v);
	
};
