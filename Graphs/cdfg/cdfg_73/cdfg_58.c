#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 675933205
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, char p_11, signed char p_13, unsigned long p_17[4],
          signed char p_19[1])
{
  unsigned long v_27;
  unsigned int v_25;
  long v_23;
  char v_21;
  unsigned long v_15;
  short v_9;
  signed char v_7;
  float v_5;
  unsigned char v;
  short result;
  v_27 = p_17[0];
  v_21 = (char)-83;
  v_15 = (unsigned long)p;
  v_9 = (short)23823;
  v_7 = (signed char)p_11;
  v = (unsigned char)85;
  result = (short)-1763;
  if (695159459U == (unsigned int)v) {
    v_7 = (signed char)(- (- p_17[0] + (unsigned long)((int)v_7 + (int)p_19[0])));
    v_9 = (short)((int)p_11 / (((int)v_21 << ((int)p_19[0] & 7)) + 530));
    v = (unsigned char)(~ (v_15 % (unsigned long)((-108 ^ (int)v_7) + 92)));
  }
  else {
    v_23 = (long)((unsigned long)(((int)v_9 + 17561) * -45) * p_17[0]);
    v_25 = (unsigned int)p_19[0];
    v_9 = (short)((unsigned long)(((long)p_13 / (v_23 + 905L)) * (long)p_19[0]) % (
                  (189UL + (unsigned long)v_25 * v_27) + 323UL));
  }
  if (27299UL != ~ ((unsigned long)v_9 | v_15) >> ((p_17[3] % 988595207UL ^ (unsigned long)(- p_19[0])) & 31UL)) {
    v_7 = (signed char)(-30198L / (((long)(~ result) ^ 17495768L) + 907L));
    v_5 = (float)v_7;
    result = (short)(! ((222LL * p) % (long long)(((int)v + (int)((unsigned char)v_5)) + 844)));
  }
  else {
    v_9 = (short)7;
    result = (short)(- ((float)v_9 + 13.5476541519f) - (float)(60 | (
                                                               (int)p_11 - (int)p_13)));
  }
  return result;
}


