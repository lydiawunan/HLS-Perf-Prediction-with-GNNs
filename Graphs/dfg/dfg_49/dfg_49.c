#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 176522774
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, int p_5, unsigned long long p_9)
{
  signed char v_15;
  unsigned char v_13;
  double v_11;
  unsigned long v_7;
  char v;
  unsigned short result;
  v_15 = (signed char)p_5;
  v_13 = (unsigned char)p;
  v_11 = -239.421598663;
  v = (char)p_9;
  result = (unsigned short)61459;
  v_7 = (unsigned long)(((unsigned int)6.71782460625e+37f + ((unsigned int)(
                                                             (int)result + (int)v_13) + (
                                                             4294930083U - (unsigned int)p_5))) / (unsigned int)(
                        (((int)p - (int)p) ^ ~ ((int)v_15 << ((int)v_13 & 7))) + 453));
  result = (unsigned short)((unsigned long long)v_13 ^ (unsigned long long)(
                                                       (-59156LL - (long long)v_7) * (long long)v_13) / (
                                                       p_9 + 600ULL));
  v = (char)((p_9 & (unsigned long long)v_11) ^ (unsigned long long)(! (
             ((unsigned long)v / (v_7 + 391UL)) / (unsigned long)((int)result + 401))));
  result = (unsigned short)((unsigned long)(! (-972179175 * (int)v) | (int)p) * ~ (
                            (unsigned long)(-126 % (p_5 + 381)) / (v_7 + 266UL)));
  return result;
}


