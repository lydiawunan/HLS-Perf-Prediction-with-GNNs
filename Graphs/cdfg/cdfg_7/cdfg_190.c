#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 315216215
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, signed char p_11, unsigned short p_15)
{
  long long v_25;
  unsigned long v_23;
  char v_21;
  short v_19;
  float v_17;
  unsigned long long v_13;
  signed char v_8;
  long v_6;
  short v_4;
  unsigned long long v;
  long long result;
  v_25 = (long long)p_11;
  v_23 = 426160340UL;
  v_21 = (char)p_11;
  v_19 = (short)-7361;
  v_17 = (float)p_11;
  v_8 = (signed char)p_15;
  v_6 = (long)p_11;
  v = 7432ULL;
  result = -27800075LL;
  while (! ((int)p_11 % ((int)((signed char)p) + 130) - (int)v_17) <= - (
         (int)((double)result - p) % ((int)v_19 * 37 + 767))) {
    v_21 = v_25 / (long long)((v_23 - 4294920002UL) + 605UL);
    v_8 = (signed char)(-9386 - (int)(p + (double)p_15) / ((int)p_15 * (int)((unsigned short)p) + 657));
    result = (long long)((v + (unsigned long long)(v_6 % 4591L)) - (unsigned long long)(- (
                         7 * (int)p_15)));
    v_17 = (float)((int)p_15 + (111 - (int)p_15));
  }
  while_0_break: ;
  if ((long long)((int)(- p) * ((int)v_19 % 235)) <= ! ((long long)v_21 | 
                                                        25741LL / (long long)(
                                                        (int)p_11 + 728))) {
    v_4 = (short)((unsigned long long)((v_6 | (long)v_8) - (long)(12959 - (int)((unsigned short)p))) / (
                  ! (v * (unsigned long long)p_11) + 83ULL));
    v = (unsigned long long)v_4;
    result = (long long)v;
  }
  else {
    v_13 = (unsigned long long)v_17;
    v_8 = (signed char)((int)(! (- p_11)) + (int)(! (~ p_15)));
    result = (long long)((18446744073709525052ULL % ((v_13 - (unsigned long long)v_8) + 13ULL)) % 82ULL);
  }
  return result;
}


