#include "profile.h"
#include <cmath>

const double Profile::GetTime() {
  bool UsingMaxVelocity;
  double VelocityInitial = 0.0;
  double t1;
  double t2;
  double d1;
  double d2;
  double TimeTotal;

  if (UsingMaxVelocity) {

  t1 = (kMaxVelocity - VelocityInitial)/kMaxAcceleration;
  d1 = t1*kMaxVelocity; //area of two triangles (increasing and decreasing velocity)
  d2 = goal_ - d1; //area of rectangle
  t2 = d2/kMaxVelocity;
  TimeTotal = (2*t1) + t2;
  return TimeTotal;

  } else {

  t1 = sqrt(2*goal_/kMaxAcceleration);
  return t1;

  }

  return 0.0;
}
