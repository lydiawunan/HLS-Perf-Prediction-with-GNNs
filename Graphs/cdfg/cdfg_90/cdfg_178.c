#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 329570233
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, unsigned int p_7, char p_13, unsigned char p_15,
          unsigned long p_19)
{
  signed char v_29;
  unsigned short v_27;
  signed char v_25;
  unsigned char v_23;
  long v_21;
  unsigned int v_17;
  unsigned int v_11;
  unsigned long v_9;
  float v_5;
  long v;
  short result;
  v_29 = (signed char)-103;
  v_27 = (unsigned short)35292;
  v_25 = (signed char)p_7;
  v_23 = (unsigned char)179;
  v_21 = (long)p_15;
  v_11 = 3464397295U;
  v_9 = 4294957772UL;
  v = (long)p_15 * ~ (-58115L % (long)((int)p_15 + 320));
  if (((unsigned long)v_21 | (unsigned long)p_7) >> (- (v_9 + (unsigned long)p) & 31UL) > (unsigned long)(
      (long)(~ ((int)v_29 - -116)) - p)) {
    result = (short)(4294967177U % (185U / (p_7 + 656U) + 641U) - (p_7 - v_11) / 4294967235U);
    v_5 = (float)(((unsigned long)p_7 / (((unsigned long)result - v_9) + 481UL)) % (unsigned long)(
                  (p - 89L) * 191L + 425L));
    result = (short)((long long)v * ((long long)((float)p - v_5) % -494271972701039016LL));
  }
  else {
    v_17 = (unsigned int)(~ ((unsigned long)((int)v_27 * (int)p_13) | p_19));
    v_21 = (long)(- ((int)v_23 | 72) + (43488 - (int)v_25));
    result = (short)((unsigned long)((int)p_13 >> ((int)p_15 & 7)) + (
                     (unsigned long)(- v_17) - (p_19 + (unsigned long)v_21)));
  }
  return result;
}


