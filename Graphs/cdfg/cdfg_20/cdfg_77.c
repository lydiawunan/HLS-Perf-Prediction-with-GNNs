#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 46073481
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, unsigned long p_9, signed char p_11, double p_17,
        signed char p_23)
{
  unsigned char v_27;
  unsigned int v_25;
  unsigned long long v_21;
  long long v_19;
  unsigned int v_15;
  unsigned long v_13;
  unsigned long v_7;
  unsigned long v_5;
  float v;
  int result;
  v_27 = (unsigned char)84;
  v_25 = 1043730879U;
  v_21 = (unsigned long long)p;
  v_19 = 57747LL;
  v_15 = 4470U;
  v_7 = p;
  v_5 = 4294903500UL;
  v = 1207443328.f;
  if ((unsigned long long)(~ ((unsigned long)(p_17 - (double)v_25) << (
                              - p_9 & 31UL))) < (unsigned long long)v / (
                                                (unsigned long long)v_27 / 86748309ULL + 217ULL) + (unsigned long long)(
                                                p_9 % (unsigned long)(
                                                (int)p_11 + 229) | (v_5 - v_7))) {
    result = (int)((unsigned long)(-3.33967479598e+38 + (double)((unsigned long long)v_19 * v_21)) * ! (
                   (unsigned long)v_15 + p));
    v = (float)(3706277246UL * (unsigned long)(- (- p_17)));
    v_15 = (unsigned int)(-1LL * (long long)v);
  }
  else {
    v_15 = (unsigned int)(- p_23);
    v_5 = (unsigned long)(! (108426ULL * ((unsigned long long)-1.73515343311e+38 + 29050ULL)));
    result = 51889;
  }
  while (- (~ ((unsigned long)v ^ p)) >= v_5) {
    v = (double)v_7 + -175.947033349;
    result = (int)(((unsigned long long)p_9 | 386413823ULL) % (unsigned long long)(
                   v_15 + 648U) ^ 0ULL);
    v_13 = ((unsigned long)result & (p_9 ^ (unsigned long)p_11)) - - p_9;
    v_5 = (unsigned long)(- (8826176512.f + (float)p_9)) - (unsigned long)(- p_11) * (
                                                           v_13 % (unsigned long)(
                                                           (int)p_11 + 449));
  }
  while_0_break: ;
  return result;
}


