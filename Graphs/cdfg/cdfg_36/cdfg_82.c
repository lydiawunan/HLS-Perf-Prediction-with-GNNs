#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 251844079
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p, unsigned char p_5, short p_9, int p_11,
              long p_13)
{
  float v_19;
  signed char v_17;
  short v_15;
  signed char v_7;
  long long v;
  long long result;
  v_19 = (float)p_13;
  v_17 = (signed char)29;
  v_15 = (short)-28832;
  if ((long long)(((int)p + p_11) - 21739 % ((int)v_17 + 730)) * ((long long)v_17 + -685054197LL) <= (long long)(
      (int)((unsigned char)v_19) * 230)) {
    v_7 = (signed char)(~ (((long)p_5 - p_13) % (long)((int)(- v_15) + 898)));
    result = (long long)(-16135L - p_13 * (long)p_11);
    v = (long long)(! p_9) * ~ result ^ (long long)(~ ((long)p_11 + p_13));
  }
  else {
    v = (long long)(((int)p_9 / ((int)p_5 + 967)) % ((int)p + 14) & (int)p);
    v_7 = (signed char)3.77610426529e-10;
  }
  result = (v ^ (long long)(~ p)) / (long long)(((unsigned long)(- p_5) + (
                                                 4212147815UL + (unsigned long)v_7)) + 808UL);
  return result;
}


