#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 25405277
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, int p_4, unsigned int p_6,
                unsigned long long p_8, unsigned char p_10)
{
  unsigned short v_21;
  double v_19;
  long long v_17;
  int v_15;
  float v_13;
  unsigned short v;
  signed char result;
  v_21 = (unsigned short)44921;
  v_17 = (long long)p_4;
  v_15 = p_4;
  v_13 = (float)p;
  v = (unsigned short)p_4;
  while ((unsigned long)((long)(- v_13) + (0 - (long)((int)p_10 & p_4))) >= (unsigned long)(
         ((unsigned int)p_4 % (~ p_6 + 16U)) / ((unsigned int)v_13 + 814U))) {
    v_13 = v_17 % -869LL;
    v_19 = (double)((unsigned long)(! ((int)p_10 + 59423)) & (unsigned long)(
                                                             (int)-4260972741.63 / (
                                                             v_15 + 942)) / (
                                                             (3562327695UL - (unsigned long)p) + 223UL));
    v_17 = (long long)v - ((long long)v_19 / 688987802LL) * (long long)(
                          (int)v_21 - (int)((unsigned short)v_13));
    v_13 = (float)(! (unsigned char)201);
  }
  while_0_break: ;
  if (~ ((unsigned long long)p_6 | p_8) - (unsigned long long)(- (-21446 % (
                                                                  (int)p_10 + 900))) < 
      ~ ((unsigned long long)v % (p_8 + 753ULL)) * (unsigned long long)(
      (int)((float)p_4 - -186.255722046f) - ((int)p ^ p_4))) result = (signed char)(
                                                             (int)(! p) * 10966);
  else result = (signed char)(p_4 + 29958);
  return result;
}


