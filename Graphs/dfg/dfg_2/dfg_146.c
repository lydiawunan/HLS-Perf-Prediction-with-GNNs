//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 562150644
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, unsigned int p_11)
{
  short v_19;
  float v_17;
  unsigned short v_15;
  char v_13;
  short v_9;
  unsigned short v_7;
  char v_5;
  double v;
  long result;
  v_19 = (short)p_11;
  v_17 = (float)p;
  v_15 = (unsigned short)p;
  v_7 = (unsigned short)p;
  v_5 = (char)p;
  result = (long)p_11;
  v_13 = (char)(~ (p_11 / ((36U + p_11) + 827U) << (((unsigned long long)(! result) + p) & 31ULL)));
  v_9 = (short)result;
  v = (double)((int)(! (- v_13)) * ((28604 - (int)v_15 % ((int)v_7 + 448)) & 
                                    (int)((short)((float)p_11 * v_17)) / (
                                    (int)(~ v_19) + 97)));
  result = (long)((float)((unsigned long long)((long long)(- v) & -11915LL) ^ (
                          p % (unsigned long long)((int)v_5 + 477) >> (
                          ((int)v_7 - (int)v_9) & 63))) - (((float)p_11 + 5.54785358361e+37f) + (float)(
                                                           (int)(- v_5) * -11115)));
  return result;
}


