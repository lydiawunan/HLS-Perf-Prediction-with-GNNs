//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 147459204
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, unsigned int p_7[1], unsigned char p_9,
              double p_17)
{
  unsigned int v_15;
  short v_13;
  char v_11;
  short v_5;
  long v;
  long long result;
  v_13 = (short)-16218;
  v_11 = (char)74;
  v_15 = (unsigned int)p_9;
  v_5 = (short)(167. / ((double)(v_15 * 4294964762U + (unsigned int)(~ p_9)) * p_17 + 33.));
  v = (long)((unsigned long)(p * ((unsigned int)((float)v_5 / -1.28321562559e+38f) * (
                                  p_7[0] - (unsigned int)p_9))) & (unsigned long)v_11 % (
                                                                  ((unsigned long)v_13 + 486324558UL) + 61UL));
  result = (long long)(- v);
  return result;
}


