#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 653358742
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p, unsigned long long p_5, signed char p_9,
                  int p_13, unsigned short p_19)
{
  signed char v_21;
  long v_17;
  unsigned long long v_15;
  float v_11;
  unsigned int v_7;
  double v;
  unsigned long result;
  v_21 = (signed char)85;
  v_17 = 1060133833L;
  v_7 = 4294926446U;
  v = p;
  result = (unsigned long)p_5;
  v_15 = (unsigned long long)(- (- -387834028));
  if (-38 > (((int)p_9 + (int)(~ p_19)) | (int)v_21)) {
    v = (double)(((long long)(~ result) - (-1016550676LL - (long long)p_9)) + (long long)9.11726979525e+37);
    result = (unsigned long)(~ ((unsigned long long)p - p_5) % (unsigned long long)(
                             v_7 + 1000U));
    result = ! ((unsigned long)(- v) - (53179UL - result));
  }
  else {
    v = (double)(((v_15 - 64128ULL) + (unsigned long long)v) / (unsigned long long)(
                 - v_17 + 212L));
    v_11 = (float)(- (- (35516. / (v + 167.))));
    result = (unsigned long)(! (45 - (int)((char)v_11)) & ! (~ p_13));
  }
  return result;
}


