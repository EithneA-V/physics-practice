#include "profile.h"
#include <cmath>

const double Profile::GetTime() {
  bool UsingMaxVelocity;
  double VelocityInitial = 0.0;
  double t1;
  double t2;
  double TimeTotal;

  if (UsingMaxVelocity) {
  t1 = (kMaxVelocity - VelocityInitial)/kMaxAcceleration;
  t2 = 1 - t1;
  TimeTotal = (t1*2) + (t2);
  return TimeTotal;
  } else {
  t1 = sqrt(2*goal_/kMaxAcceleration);
  return t1;
  }

  return 0.0;
}
