// Fill out your copyright notice in the Description page of Project Settings.


#include "Integrator.h"

Integrator::Integrator()
{

}

void Integrator::StepEuler(OrbitalState& s, double dt)
{
	OrbitalVector newPosition = OrbitalVector::Add(s.GetPosition(), OrbitalVector::Scale(s.GetVelocity(), dt));
	s.SetPosition(newPosition);
}