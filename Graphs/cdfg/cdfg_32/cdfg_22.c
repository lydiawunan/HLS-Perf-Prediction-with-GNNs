#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 677703991
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p, unsigned long p_9[1][2][3], int p_11,
                  signed char p_13, unsigned int p_23)
{
  unsigned char v_21;
  unsigned long long v_19;
  signed char v_17;
  int v_15;
  int v_6;
  signed char v_4;
  short v;
  unsigned long result;
  v_19 = (unsigned long long)p_13;
  v_17 = (signed char)-125;
  v_4 = (signed char)p_23;
  v_21 = (unsigned char)(! ((unsigned int)v_17 + p_23) * (unsigned int)(- (! p_11)));
  if (((long)v_21 + 1009169030L) * (long)(- ((int)p - (int)p_13)) == 
      -1L % ((long)((float)(~ p_23) / (955.417053223f * (float)v_19 + 654.f)) + 639L)) {
    v_6 = (int)((long)1.67360265278e+38 * - ((long)p_11 & 23904L));
    v = (short)((-2817LL & (long long)v_4) / (long long)(v_6 / ((int)p + 23) + 264) - (long long)(
                4226928723UL / (p_9[0][0][2] + 947UL)));
    result = (unsigned long)(- ((unsigned int)((int)v + -2) * 472056637U));
  }
  else {
    v_15 = (int)(- (! v_19 % 815ULL));
    v_17 = (signed char)-726643441664.f;
    result = (unsigned long)((int)p_13 * (~ v_15 | (36 - (int)v_17)));
  }
  return result;
}


