#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 565184087
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, unsigned short p_4, int p_7)
{
  signed char v_9;
  int v;
  int result;
  v_9 = (signed char)-113;
  v = (int)v_9;
  if (0. <= - (- (308.661577561 / ((double)v + 604.)))) result = (int)-895.528312894;
  else {
    result = 819570348;
    result = - (((int)p_4 ^ v) + (-10596 + result));
    result = (int)((long long)(- p) % ((335312065LL - (long long)((float)result / (
                                                                  p + 773.f))) + 537LL));
  }
  return result;
}


