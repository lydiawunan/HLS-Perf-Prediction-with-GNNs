#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 187894212
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, float p_4[4], short p_13, signed char p_15)
{
  unsigned short v_19;
  char v_17;
  short v_11;
  int v_9;
  long v_7;
  short v;
  double result;
  v_19 = (unsigned short)p_4[1];
  v_17 = (char)104;
  v_9 = (int)p_4[0];
  v_7 = (long)p_15;
  result = (double)p_15;
  v = (short)((unsigned long long)(((int)(! p_13) * 21697) % ((int)(107. - (
                                                                    result - (double)p_13)) + 1004)) + 
              (unsigned long long)v_19 * 18446744073709521915ULL);
  v_11 = (short)p_4[2];
  result = (double)((unsigned long)((long)((int)((short)(55857300.f / (
                                                         p_4[2] + 933.f))) - (int)(~ v)) * v_7) | (unsigned long)(
                    (unsigned int)((int)2.00207584068e+38f & v_9) / (
                    (unsigned int)v_11 / 906092119U + 316U) + (unsigned int)(
                    (int)p_13 * (int)p_15 - (int)v_17)));
  result = (double)(- ((unsigned long)(46241 ^ (int)(- result)) * ((unsigned long)(
                                                                   p * (int)p_4[0]) / 3819467266UL)));
  return result;
}


