#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 106950693
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, unsigned short p_9, long p_11,
         unsigned int p_13, float p_15)
{
  unsigned long long v_25;
  float v_23;
  unsigned long v_21;
  char v_19;
  int v_17;
  int v_7;
  long long v_4;
  signed char v;
  char result;
  v_25 = 28554ULL;
  v_23 = 2.11225577155e+38f;
  v_21 = (unsigned long)p_15;
  v_19 = (char)p_15;
  v_17 = (int)p;
  v_7 = (int)p;
  v = (signed char)p_15;
  result = (char)84;
  if ((unsigned int)(- v_17) - ~ p_13 * p_13 > (unsigned int)((float)(- (
                                                              p_13 % (unsigned int)(
                                                              (int)v_19 + 76))) + 
                                                              - v_23 / (
                                                              (float)v_25 + 314.f))) {
    v_23 = (float)(422358637LL + (long long)v_19);
    v = (signed char)(-29922.f / ((-8.5354261511e+37f * (float)v_21 - 
                                   v_23 / (p_15 + 463.f)) + 912.f));
    v_17 = (int)(~ ((unsigned long long)(- p_13) - ((unsigned long long)p_15 - 802089238ULL)));
  }
  else {
    v_7 = (int)((unsigned long long)p_11 - - p);
    v_19 = (char)(- (! p));
    v_17 = (int)(- p_11);
  }
  if (p_15 + (float)v_17 >= (float)(~ ((unsigned int)p_9 * 3936U) << (
                                    (0ULL - (unsigned long long)((int)v_19 >> (
                                                                 v_21 & 7UL))) & 31ULL))) {
    v_4 = (long long)(((p - (unsigned long long)v_7) * (unsigned long long)(! p_9)) % (unsigned long long)(
                      ~ (p_11 - (long)result) + 445L));
    v = (signed char)(202727657UL * (unsigned long)(- v) << (v_4 & 31LL));
    result = (char)(- (! v));
  }
  else result = (char)(! (p_13 / ((unsigned int)(p_15 * 1.84467440737e+19f) + 792U)));
  return result;
}


