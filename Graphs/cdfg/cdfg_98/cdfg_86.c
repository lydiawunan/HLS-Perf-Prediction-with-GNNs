#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 360923295
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, char p_7, unsigned long long p_11,
                signed char p_21[5][1][2])
{
  unsigned int v_19;
  signed char v_17;
  unsigned long v_15;
  short v_13;
  long long v_9;
  long v_5;
  unsigned short v;
  signed char result;
  v_19 = (unsigned int)p_11;
  v_17 = (signed char)p_7;
  v_15 = (unsigned long)p_7;
  v_13 = (short)-26249;
  v_5 = (long)p;
  v_9 = (long long)(((unsigned long long)v_5 % ((p_11 - p) + 660ULL)) / (
                    (((unsigned long long)p_21[4][0][0] & p) - 143327832158ULL) + 775ULL));
  if ((! ((long long)v_13 - v_9) & (long long)(~ v_15 | (unsigned long)(
                                               (int)v_17 * (int)((signed char)-8.18729654991e+37)))) > ~ (
      (long long)((unsigned long)v_19 + 4294965143UL) / -826LL)) result = (signed char)p;
  else {
    v_5 = (long)((unsigned long long)(- (v_5 / (long)((int)p_7 + 555))) / (
                 0ULL % (((unsigned long long)v_9 - p_11) + 352ULL) + 234ULL));
    v = (unsigned short)v_5;
    result = (signed char)v;
  }
  return result;
}


