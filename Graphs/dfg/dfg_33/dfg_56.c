#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 70480646
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p, int p_9)
{
  long long v_15;
  unsigned char v_13;
  signed char v_11;
  float v_7;
  unsigned int v_5;
  char v;
  signed char result;
  v_15 = 992244693LL;
  v_13 = (unsigned char)237;
  v_11 = (signed char)p;
  v_5 = (unsigned int)p_9;
  v_7 = (float)v_15;
  result = (signed char)(v_5 * (unsigned int)((((int)p + (int)((char)v_7)) % (
                                               ~ p_9 + 758)) / (((int)(! v_11) - (int)(- v_13)) + 467)));
  v = ! p;
  result = (signed char)((int)result / (((int)v - 37993) + 903));
  return result;
}


