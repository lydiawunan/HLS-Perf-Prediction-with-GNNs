#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 516352317
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, double p_17)
{
  char v_14;
  unsigned char v_12;
  short v_10;
  unsigned char v_8;
  char v_6;
  long long v_4;
  unsigned char v;
  unsigned int result;
  v_10 = (short)p;
  v_8 = (unsigned char)p_17;
  v_6 = (char)-32;
  v_4 = -125614001LL;
  v = (unsigned char)25;
  result = (unsigned int)p;
  if ((unsigned long long)(611 * ~ ((int)v_6 + (int)((char)p_17))) != 
      18446744073158020579ULL - (18446744073709516351ULL - (unsigned long long)(
                                 (int)v - (int)((unsigned char)p_17)))) {
    v_6 = (char)35;
    v_14 = (char)((double)v_6 / -709826291.06 + -112523258.);
    result = (unsigned int)(- ((int)v_14 << 7) * ((int)(1.87743982519e+38f * (float)v_10) << (
                                                  16387 % ((int)p + 134) & 31)));
  }
  else {
    v = (unsigned char)((unsigned int)(p_17 * 513.323059082) | result / 4294961587U);
    v_10 = (short)(- (p_17 / ((double)v_8 + 526.) - - p_17));
    v_6 = (char)(~ (signed char)16);
  }
  while ((long long)((int)v ^ (int)v) >= ! (- v_4 - (long long)(result >> 22ULL))) {
    v_12 = (long)v_6 % 391492393L;
    v_14 = (char)(~ ((result / 4294967238U) / (unsigned int)(45 * (int)((signed char)7885551104.f) + 846)));
    v_4 = (long long)((unsigned int)((int)v_14 + (int)(! v_8)) & result);
    v = (unsigned char)(! (~ ((int)v_10 * (int)v_12)));
  }
  while_0_break: ;
  return result;
}


