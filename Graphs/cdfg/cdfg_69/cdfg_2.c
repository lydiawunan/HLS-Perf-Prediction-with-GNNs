#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 495171653
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p, short p_11, double p_17)
{
  unsigned int v_19;
  unsigned int v_15;
  double v_13;
  unsigned char v_9;
  int v_6;
  char v_4;
  unsigned short v;
  unsigned short result;
  v_19 = (unsigned int)p;
  v_15 = 4294958967U;
  v_13 = (double)p_11;
  v_9 = (unsigned char)15;
  v_6 = (int)p_17;
  result = (unsigned short)p_11;
  while (p_17 <= (double)(-876.178161621f + (float)v_15)) {
    result = v_19 + 4294967204U;
    v_6 = -59525;
    v_9 = (unsigned char)((6963 + (int)p_11 / ((int)((short)p) + 321)) / (
                          (int)(- v_13 + (double)(! v_9)) + 174));
    v_15 = (unsigned int)result;
  }
  while_0_break: ;
  if (- (((double)result + p) - (23171. - p)) != - (v_13 + (double)(v_15 / (
                                                                    (unsigned int)p + 655U)))) {
    v_4 = (char)p_11;
    v = (unsigned short)(~ ((unsigned int)v_6 % 3753367323U & (unsigned int)(
                            p - (double)v_9)));
    result = (unsigned short)((long long)((int)result * (90 % ((int)v + 284))) + 
                              (long long)(-607921931.259 / ((double)v_4 + 241.)) * (
                              (long long)v * 20676LL));
  }
  else result = (unsigned short)-1.12275116432e+38;
  return result;
}


