#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 253109691
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p[3], int p_5)
{
  double v;
  long long result;
  v = -55.7996998195;
  result = (long long)p[2];
  result = (long long)((p[1] % (p_5 + 388)) % 203) % (result + 490LL);
  if (result == (long long)v) result = (long long)2884530944.f;
  else result = (long long)p[1];
  return result;
}


