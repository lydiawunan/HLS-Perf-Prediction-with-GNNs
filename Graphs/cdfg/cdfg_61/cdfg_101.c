#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 290010695
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p, unsigned long p_5, int p_7[2], long p_11,
                  long long p_15)
{
  unsigned short v_23;
  short v_21;
  int v_19;
  double v_17;
  double v_13;
  short v_9;
  long v;
  unsigned long result;
  v_21 = (short)p_15;
  v_19 = (int)p_5;
  v_17 = (double)p_7[0];
  v_13 = (double)p_7[0];
  v_9 = (short)p;
  while ((long)((int)((char)-549.182434082f) % 103) != (long)v_17 * ~ (
                                                       (long)v_19 + 63902L)) {
    v_23 = (long)v_21 / 17225L;
    v_13 = (double)(21098 / ((p_7[1] / 56) % ((int)v_23 + 784) + 947));
    v_9 = (short)-18112;
    v_19 = (int)(-33LL | p_15);
  }
  while_0_break: ;
  if ((long long)((long)v_9 - - (p_11 / ((long)7.25505229873e+37 + 1L))) != ! (
      (long long)(- v_13) % (p_15 + 892LL))) {
    v = (long)(! (-258954178));
    result = (unsigned long)(- (! p)) + ((unsigned long)v - p_5);
  }
  else result = (unsigned long)p_7[1];
  return result;
}


