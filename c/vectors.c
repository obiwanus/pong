#include "vectors.h"

v2 V2(float x, float y) {
  v2 result = {x, y};
  return result;
}

float Length(const v2 a) {
  return (float)sqrt(a.x * a.x + a.y * a.y);
}

v2 Normalize(const v2 a) {
  float len = Length(a);
  return V2(a.x / len, a.y / len);
}

v2 Lerp(const v2 a, const v2 b, float t) {
  if (t < 0) t = 0;
  if (t > 1.0f) t = 1.0f;
  return V2(
    a.x + t * (b.x - a.x),
    a.y + t * (b.y - a.y)
  );
}

v2 Scale(const v2 a, const float value) {
  return V2(value * a.x, value * a.y);
}

v2 OrthoNormalV2(const v2 a) {
  v2 result = {a.y / a.x, -1};
  return Normalize(result);
}

v2 Add(const v2 a, const v2 b) {
  v2 result = {a.x + b.x, a.y + b.y};
  return result;
}

v2 Neg(const v2 a) {
  v2 result = {-a.x, -a.y};
  return result;
}
