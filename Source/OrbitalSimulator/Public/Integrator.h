// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OrbitalState.h"

/**
 * 
 */
class ORBITALSIMULATOR_API Integrator
{
public:
	Integrator();

	static void StepEuler(OrbitalState& s, double dt);

};
