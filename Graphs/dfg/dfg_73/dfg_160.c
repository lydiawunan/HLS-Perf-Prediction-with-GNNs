#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 930386935
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p)
{
  float v_11;
  float v_9;
  unsigned int v_6;
  float v_4;
  unsigned short v;
  long long result;
  v_11 = -8.728013715e+37f;
  v_6 = 777012680U;
  v = (unsigned short)31938;
  result = (long long)p;
  v_9 = (float)(! (! result) - (long long)(- v_6 * (unsigned int)((float)p + v_11))) + 4.89109344178e+37f;
  v_6 = (unsigned int)v_9;
  v_4 = (float)(~ (! ((long long)(4294967271U % (v_6 + 876U)) & -36433LL * (long long)p)));
  result = (long long)(! (~ (652151466ULL % (unsigned long long)((int)v + 537))) - (unsigned long long)(
                       54511LL % (((long long)v_4 | 15981LL) * -8548876800LL + 141LL)));
  return result;
}


