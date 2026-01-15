// Fill out your copyright notice in the Description page of Project Settings.


#include "OrbitalState.h"

OrbitalState::OrbitalState() : position(), velocity()
{
}

OrbitalState::OrbitalState(const OrbitalVector& r, const OrbitalVector& v) : position(r), velocity(v)
{
}

void OrbitalState::SetPosition(const OrbitalVector& r)
{
	position = r;
}

void OrbitalState::SetVelocity(const OrbitalVector& v)
{
	velocity = v;
}

const OrbitalVector& OrbitalState::GetPosition() const
{
	return position;
}

const OrbitalVector& OrbitalState::GetVelocity() const
{
	return velocity;
}