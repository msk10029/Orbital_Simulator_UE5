// Fill out your copyright notice in the Description page of Project Settings.


#include "OrbitalVector.h"
#include <cmath>
using namespace std;

OrbitalVector::OrbitalVector()
	:x(0.0), y(0.0), z(0.0)
{
}

OrbitalVector::OrbitalVector(double x_c, double y_c, double z_c)
	:x(x_c), y(y_c), z(z_c)
{
}

OrbitalVector OrbitalVector::Add(const OrbitalVector& a, const OrbitalVector& b)
{
	return OrbitalVector(a.x + b.x, a.y + b.y, a.z + b.z);
}

OrbitalVector OrbitalVector::Subtract(const OrbitalVector& a, const OrbitalVector& b)
{
	return OrbitalVector(a.x - b.x, a.y - b.y, a.z - b.z);
}

OrbitalVector OrbitalVector::Scale(const OrbitalVector& v, double s)
{
	return OrbitalVector(v.x*s, v.y*s, v.z*s);
}

double OrbitalVector::Magnitude() const
{
	return std::sqrt(x * x + y * y + z * z);
}