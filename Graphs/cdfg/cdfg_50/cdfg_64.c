#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 845133263
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, unsigned char p_4, unsigned int p_6, long long p_8,
          unsigned int p_15)
{
  long long v_27;
  unsigned int v_25;
  float v_23;
  float v_21;
  unsigned int v_19;
  char v_17;
  unsigned char v_13;
  long long v_11;
  unsigned long v;
  short result;
  v_27 = 54007LL;
  v_25 = 4257115348U;
  v_23 = -887.293395996f;
  v_21 = 15.265707016f;
  v_19 = (unsigned int)p_4;
  v_17 = (char)p_6;
  v_13 = (unsigned char)p_6;
  v_11 = 979674656LL;
  v = 132739228UL;
  result = (short)162;
  if ((unsigned long)p_6 < - (~ v)) {
    v_11 = (long long)(((v % (unsigned long)(v_25 + 812U)) / (unsigned long)(
                        (int)(- v_17) + 923)) % (unsigned long)((int)p + 231));
    v_17 = (char)((long long)(41205UL * (unsigned long)(- v_23)) | -1024560230LL * ! p_8);
    v_13 = (unsigned char)(! (~ v_11));
  }
  else {
    v = (unsigned long)((7320ULL / (unsigned long long)(p_8 / (long long)(
                                                        p_6 + 222U) + 1013LL)) % (unsigned long long)(
                        (long long)p_4 / (v_27 + 460LL) + 197LL));
    result = (short)(((long long)(~ v_19) | ~ p_8) + 283065419LL);
    v_21 = (float)p_15;
  }
  while ((long long)(- ((long)result * 33172L)) + (long long)(~ p_6) % (
                                                  p_8 / (long long)(v + 117UL) + 447LL) < (long long)p_4) {
    result = (int)v_13 >> (v_11 * (long long)1.29338847096e+38f & 7LL);
    v_11 = (long long)(~ v_19 % (((unsigned int)(- v_21) & ~ v_19) + 340U));
    v_13 = (unsigned char)235;
    v = (unsigned long)(~ (((unsigned int)result % (p_6 + 793U)) * (p_15 - (unsigned int)v_17)));
  }
  while_0_break: ;
  return result;
}


