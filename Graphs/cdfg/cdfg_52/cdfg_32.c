#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 685585208
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p, unsigned long p_5[2][4], unsigned char p_7,
                int p_19, unsigned short p_23[5])
{
  float v_31;
  long long v_29;
  signed char v_27;
  unsigned short v_25;
  unsigned short v_21;
  long long v_17;
  unsigned int v_15;
  int v_13;
  long long v_11;
  long long v_9;
  long long v;
  signed char result;
  v_31 = -120626504.f;
  v_29 = (long long)p_7;
  v_27 = (signed char)p_19;
  v_25 = (unsigned short)p_7;
  v_21 = p_23[4];
  v_17 = 1863LL;
  v_15 = 358885549U;
  v_13 = 27397;
  v_11 = (long long)p;
  v_9 = 27100LL;
  while (- ((int)v_27 + p_19 * (int)v_27) > (int)(((double)v_27 - p / (
                                                                  (double)v_15 + 999.)) - (double)(
                                                  (int)(~ p_7) << ((9 ^ (int)((signed char)-2.27459092534e+38)) & 7)))) {
    v_21 = v_31 + 339.f;
    v_17 = (0LL % (((long long)v_27 - v_17) + 545LL)) % (((v_17 - (long long)p_19) - (
                                                          v_29 << ((int)v_27 & 63))) + 106LL);
    v_31 = (float)(4294913564UL * (unsigned long)(~ ((unsigned int)p_7 * v_15)));
    v_15 = 4360U;
  }
  while_0_break: ;
  if (! ((long long)(-20612 * v_13) % (((long long)p_23[0] | v_17) + 477LL)) != (long long)(
      (int)((unsigned short)((p + (double)p_5[1][0]) * (double)(-44 & (int)v_25))) / (
      (int)v_21 + 45))) {
    result = (signed char)(- ((v_9 - v_11) % ((long long)(p + (double)v_13) + 178LL)));
    v = (long long)(p / ((double)((p_5[1][1] + (unsigned long)result) * (unsigned long)p_7) + 236.));
    result = (signed char)v;
  }
  else {
    v_17 = (long long)(18446744073339418874ULL ^ (unsigned long long)(
                       (v_17 % (long long)((int)v_21 + 101)) / (long long)(
                       (unsigned long)p_23[2] % (p_5[0][3] + 528UL) + 343UL)));
    v_15 = (unsigned int)(- ((float)(127LL % (v_17 + 329LL)) * (-335.906707764f - (float)p_19)));
    result = (signed char)v_15;
  }
  return result;
}


