#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 402848396
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long p, unsigned char p_5, unsigned short p_7,
                  float p_15, unsigned long long p_17)
{
  long long v_25;
  long long v_23;
  double v_21;
  signed char v_19;
  unsigned char v_13;
  float v_11;
  unsigned char v_9;
  unsigned short v;
  unsigned char result;
  v_25 = (long long)p_7;
  v_23 = (long long)p_7;
  v_21 = 5.07329537642e+37;
  v_19 = (signed char)p_5;
  v = (unsigned short)p_17;
  if (((unsigned long long)(- p) - 18446744072728765392ULL * (unsigned long long)p_7) / (unsigned long long)(
      ((long long)(-21913L + (long)p_5) - (v_23 ^ v_25)) + 238LL) > (unsigned long long)(
      (long)p_7 % (((long)(25 / ((int)p_5 + 438)) & -37570L) + 412L))) {
    v_9 = p_5;
    v_13 = (unsigned char)(~ (unsigned short)5533);
    v_11 = (float)v_19;
  }
  else {
    v_11 = (float)p_5;
    v_13 = (unsigned char)((unsigned int)(((double)p_15 + v_21) / ((double)(~ v) + 782.)) - (
                           3914812332U + (unsigned int)p_7));
    v_9 = (unsigned char)((int)p_5 * ((int)p_7 * ((int)((unsigned short)p_15) - 17853)));
  }
  if ((unsigned long long)(~ (((int)v_9 ^ 45095) * (int)(- v_11))) >= 
      (unsigned long long)(399324700UL ^ (unsigned long)((int)v_13 + (int)((unsigned char)p_15))) + 
      - p_17 / 18446744073242530877ULL) {
    v = p_7;
    v = (unsigned short)(~ ((unsigned long)v * p) / (unsigned long)((
                                                                    (int)p_5 - (int)v) + 925));
    result = (unsigned char)v;
  }
  else result = (unsigned char)184;
  return result;
}


