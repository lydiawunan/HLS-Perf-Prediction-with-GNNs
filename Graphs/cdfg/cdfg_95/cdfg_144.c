#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 91283767
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, unsigned int p_5, long p_9, int p_13, char p_15)
{
  long long v_19;
  float v_17;
  signed char v_11;
  char v_7;
  unsigned char v;
  int result;
  v_19 = (long long)p_9;
  v_17 = 2.91437761053e+38f;
  v_11 = (signed char)-65;
  v_7 = (char)(((p_13 - (int)v_11) + (int)(- p_15)) - (int)(v_17 - (float)(- v_19)));
  if (p_9 <= (long)(- (-151.064977292 + (double)v_11) * (double)p_13)) {
    v = (unsigned char)((p_5 % (unsigned int)((int)v_7 / ((int)((char)1.12103352948e+38) + 999) + 979)) * 4294967193U);
    result = 2961 + - ((int)((short)p) >> 9);
    result = (int)(((unsigned long long)result - 244931908ULL) + (unsigned long long)(! (
                   (int)v + (int)((unsigned char)p))));
  }
  else result = -17640;
  return result;
}


