#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 262152704
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, unsigned short p_9, signed char p_13,
         unsigned int p_17[4], unsigned long p_21)
{
  short v_23;
  int v_19;
  signed char v_15;
  double v_11;
  int v_7;
  unsigned long v_5;
  unsigned long long v;
  long result;
  v_23 = (short)p;
  v_19 = -33228;
  v_11 = -311.706117521;
  v_5 = (unsigned long)p_17[2];
  v = 30126ULL;
  result = (long)(- (((unsigned long long)p_21 / (v + 605ULL)) * (unsigned long long)p_17[3]));
  if ((~ p_21 ^ 86121UL) - (unsigned long)p >= (unsigned long)((int)(- (- v_23)) * -120)) {
    result = (long)(- ((unsigned long long)v_5 % 575960977ULL + (unsigned long long)result));
    v = (unsigned long long)p;
    result = (long)((unsigned long long)(-29L * (result % (result + 796L))) % (
                    v + 902ULL));
  }
  else {
    v_15 = (signed char)((unsigned int)(~ (v_19 >> 4)) + ((unsigned int)(
                                                          65084 * (int)p_9) - 9U));
    v_7 = (int)((unsigned int)v_15 * p_17[0]);
    result = (long)(v_7 - (((int)p_9 - (int)((unsigned short)v_11)) << (
                           (int)p_13 & 31)));
  }
  return result;
}


