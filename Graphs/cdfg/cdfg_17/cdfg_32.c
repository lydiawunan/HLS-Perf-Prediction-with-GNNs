#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 335355441
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p[3], short p_7, unsigned long long p_9,
          unsigned int p_11, signed char p_15)
{
  int v_29;
  float v_27;
  unsigned int v_25;
  signed char v_23;
  unsigned long v_21;
  unsigned long v_19;
  short v_17;
  unsigned long long v_13;
  unsigned int v_5;
  float v;
  short result;
  v_29 = -45120902;
  v_25 = (unsigned int)p_9;
  v_19 = (unsigned long)p_15;
  v_5 = (unsigned int)p_9;
  result = (short)p_9;
  if ((long long)(~ (~ v_29)) >= 0) {
    v_21 = (unsigned long)(~ (~ v_5) | v_25);
    v_23 = (signed char)(~ (~ (-(unsigned short)4881)));
    v_5 = (unsigned int)(- ((p_9 / 42ULL) * (unsigned long long)((int)v_23 | -80)));
  }
  else {
    v_5 = (unsigned int)result;
    v_27 = (float)((unsigned int)((int)p_15 % 59) % ((p_11 & 182U) * (unsigned int)(~ p[2]) + 500U));
    v_21 = (unsigned long)v_27;
  }
  if ((unsigned long long)(~ v_19 ^ (unsigned long)(v_5 - (unsigned int)p_15)) % (
      p_9 + 784ULL) == (unsigned long long)(~ ((v_21 * (unsigned long)p_11) / 4294967240UL))) {
    result = (short)((unsigned long long)v_5 / (((unsigned long long)(
                                                 v_5 % (unsigned int)(
                                                 (int)p_7 + 106)) + p_9 * (unsigned long long)p_11) + 916ULL));
    v = (float)result;
    result = (short)(((int)(~ p[1]) * ((int)result * (int)((short)v))) / 256);
  }
  else {
    v_17 = (short)(- p[1]);
    v_13 = (unsigned long long)(~ ((int)(~ p_15) - (109 + (int)v_17)));
    result = (short)v_13;
  }
  return result;
}


