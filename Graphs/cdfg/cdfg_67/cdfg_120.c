#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 818576551
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, unsigned char p_4, unsigned short p_11,
                double p_13, unsigned long long p_15)
{
  short v_25;
  unsigned char v_23;
  long v_21;
  double v_19;
  unsigned char v_17;
  double v_9;
  int v_7;
  double v;
  signed char result;
  v_25 = (short)-13430;
  v_23 = (unsigned char)165;
  v_21 = (long)p_13;
  if ((unsigned long long)((unsigned long)(! ((long)p_4 + v_21)) / ((unsigned long)(
                                                                    (int)v_23 + (int)v_25) / 4284221416UL + 117UL)) > 
      ((unsigned long long)((int)p << ((int)p_11 & 7)) + 1ULL) + (unsigned long long)(! (
      23639UL / (unsigned long)((int)p_4 + 329)))) v_17 = ~ (unsigned char)124;
  else {
    v_19 = - -652.983327069;
    result = (signed char)p_13;
    v_17 = (unsigned char)((long)result - - ((long)v_19 / 37488L));
  }
  if (((int)(~ v_17) * -18454) * (int)(- p_13) <= (int)p_11) {
    v = (double)(short)25128;
    result = (signed char)((int)p | ((int)p_4 - ((int)((short)v) + 7825)));
  }
  else {
    v_9 = - p_13 + (double)(! (p_15 % 360496770ULL));
    v_7 = (int)v_9 - (int)(~ p_4) / ((int)p_11 + 627);
    result = (signed char)v_7;
  }
  return result;
}


