#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 347829574
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p, unsigned long p_4, unsigned long p_6[2],
                 double p_9, long p_11)
{
  short v_25;
  unsigned long long v_23;
  unsigned long v_21;
  signed char v_19;
  unsigned int v_17;
  unsigned short v_15;
  double v_13;
  short v;
  unsigned int result;
  v_25 = (short)-24311;
  v_23 = 18446744073709491561ULL;
  v_21 = 10UL;
  v_19 = (signed char)6;
  if ((unsigned long long)((double)((unsigned long)(-467.302362164 * (double)v_19) / (
                                    (unsigned long)p_9 * v_21 + 491UL)) * p_9) >= 
      ~ ((unsigned long long)p / (v_23 + 270ULL)) + (unsigned long long)(
      (p_9 / ((double)v_25 + 64.)) * (double)(213719050LL / (p + 483LL)))) {
    v_15 = (unsigned short)((long long)((unsigned long)(3962662400.f - (float)p_4) + p_6[0]) * (
                            ! p / (long long)(p_11 + 199L)));
    v_13 = (double)0UL;
  }
  else {
    v_17 = (unsigned int)p_4;
    v = (short)p_6[1];
    v_13 = (double)((18446744073709514573ULL % (unsigned long long)(- p_11 + 338L)) / (unsigned long long)(
                    (((unsigned int)v ^ v_17) & (unsigned int)(p_9 + (double)p)) + 757U));
  }
  if ((double)((float)(72UL | ~ p_6[1]) * 8.86825440797e+37f) <= v_13) 
    result = (unsigned int)((194LL / ((p + (long long)p_4) + 875LL)) % (long long)(
                            3444148970UL * p_6[1] + 441UL));
  else {
    v = (short)((unsigned long long)(p_9 + (double)((unsigned long)p_11 / (
                                                    p_6[1] + 145UL))) - 18446744073709490910ULL);
    result = (unsigned int)v;
  }
  return result;
}


