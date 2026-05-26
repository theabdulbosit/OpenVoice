#include<math.h>

float generate_sine(float frequency,float time)
{
  return sinf(2.0f * 3.14159f * frequency *time);
}
