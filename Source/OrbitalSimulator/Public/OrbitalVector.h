// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class ORBITALSIMULATOR_API OrbitalVector
{
public:
	double x;
	double y;
	double z;


	OrbitalVector();
	OrbitalVector(double x, double y, double z);

		static OrbitalVector Add(const OrbitalVector& a, const OrbitalVector& b);
		static OrbitalVector Subtract(const OrbitalVector& a, const OrbitalVector& b);
		static OrbitalVector Scale(const OrbitalVector& v, double s);

		double Magnitude() const;
};
