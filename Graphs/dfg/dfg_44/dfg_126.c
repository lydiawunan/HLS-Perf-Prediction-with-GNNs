#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 112992669
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p, unsigned long p_11[4][3])
{
  short v_17;
  unsigned short v_15;
  int v_13;
  unsigned short v_9;
  char v_7;
  unsigned char v_5;
  long v;
  double result;
  v_17 = (short)p;
  v_15 = (unsigned short)18578;
  v_9 = (unsigned short)62944;
  v_7 = (char)107;
  v_5 = (unsigned char)87;
  v = (long)v_15;
  v_13 = (int)(! v);
  v = (long)((unsigned long)(! ((int)v_5 - (int)(~ v_7))) ^ ((unsigned long)(
                                                             (int)p ^ (int)v_9) % (
                                                             p_11[2][1] * (unsigned long)v_13 + 16UL)) % (unsigned long)(
                                                            ((int)((unsigned short)4.46531495817e+37f) * (int)v_15 ^ (
                                                             (int)v_17 + (int)((short)9.54866941706e+37f))) + 523));
  result = (double)((unsigned long long)(v % (long)((int)(~ p) + 205)) * 18446744073709536973ULL);
  return result;
}


