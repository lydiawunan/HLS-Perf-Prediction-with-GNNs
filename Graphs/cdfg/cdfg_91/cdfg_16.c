#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 297396084
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, unsigned short p_5, unsigned char p_13, float p_19,
                 char p_21)
{
  char v_25;
  short v_23;
  signed char v_17;
  short v_15;
  unsigned char v_11;
  long v_9;
  long v_7;
  unsigned long long v;
  unsigned int result;
  v_25 = (char)p_13;
  v_17 = (signed char)p_21;
  v_15 = (short)p_5;
  v_11 = (unsigned char)p;
  v_7 = (long)p;
  if (- p_19 >= (float)((int)v_11 * (int)p)) {
    v_15 = (short)(~ ((int)p_19 + (int)p_13 * (int)v_15));
    v_9 = (long)((unsigned long)((unsigned int)((int)p + 30817) - 4294912837U) - (unsigned long)v_7);
    v_11 = (unsigned char)(771156913ULL * (unsigned long long)v_9 + 18446744072636679421ULL);
  }
  else {
    v_15 = (short)4088;
    v_23 = (short)(~ ((int)p / ((int)p_21 + 253) & (int)v_25));
    v_11 = (unsigned char)(~ 0);
  }
  if (~ (((int)v_17 * (int)p_5) * 150) < (! ((int)p_13 - (int)v_11) ^ (int)p)) {
    v = (unsigned long long)(~ (- ((int)p_5 / 16271)));
    result = (unsigned int)(~ (! v) * ((unsigned long long)((int)p * (int)p_5) % (
                                       18446744073709505356ULL / (unsigned long long)(
                                       (int)p + 707) + 31ULL)));
  }
  else {
    v_9 = (long)(~ ((int)p_13 - 93 % ((int)v_15 + 123)));
    v_7 = v_9 * (long)v_11;
    result = (unsigned int)v_7;
  }
  return result;
}


