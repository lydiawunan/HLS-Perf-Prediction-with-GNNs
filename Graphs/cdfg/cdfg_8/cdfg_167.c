#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 805530147
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p, int p_13[2], float p_15)
{
  double v_23;
  unsigned int v_21;
  float v_19;
  long v_17;
  unsigned int v_11;
  char v_9;
  unsigned long v_7;
  short v_4;
  signed char v;
  int result;
  v_23 = (double)p;
  v_19 = -6553198592.f;
  v_17 = -1003747867L;
  v_11 = (unsigned int)p_15;
  v_9 = (char)4;
  v_4 = (short)p_13[0];
  result = 228111634;
  if (! v_17 == (long)(- ((int)p_15 % (! result + 351)))) {
    v_11 = (unsigned int)(43799.f + p_15 * (float)(3278604371UL * (unsigned long)v_17));
    v_7 = (unsigned long)((long long)(- (- p_13[0])) / (p + 983LL));
    v_9 = (char)(! (! (p * p)));
  }
  else {
    v = ! (- (-(signed char)125));
    v_21 = (unsigned int)(- (~ p) & (long long)((double)(! p) / ((v_23 - (double)v) + 937.)));
    v_7 = (unsigned long)((p ^ (long long)v_19) % (long long)((v_21 + 40573U) + 48U) + (long long)(~ p_13[1]));
  }
  if (~ (~ p & ! p) == (long long)v_4 / (- (64506LL % (p + 160LL)) + 1LL)) 
    result = (int)(! (~ (~ 38467L)));
  else {
    v = (signed char)(- (39603LL / (p + 974LL)));
    v = (signed char)(957535388UL % (v_7 % (unsigned long)((int)v + 172) + 659UL) - (unsigned long)(
                      (unsigned int)((int)v_9 * 207) - ~ v_11));
    result = (int)((long long)v | ~ ((long long)v_4 | p));
  }
  return result;
}


