#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 752363019
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p, short p_9, long p_11)
{
  long v_17;
  unsigned short v_15;
  unsigned int v_13;
  int v_7;
  unsigned long v_5;
  unsigned long long v;
  unsigned long long result;
  v_17 = (long)p_9;
  v_15 = (unsigned short)p_11;
  v_13 = (unsigned int)p_11;
  v_7 = 60403;
  v_5 = 4294950379UL;
  v = 965703667ULL;
  while ((unsigned long long)((long)((int)p % (((int)p | v_7) + 681)) - - (
                              (long)p_9 / (p_11 + 872L))) >= ((unsigned long long)p * v - (unsigned long long)-37549455.4352) / (unsigned long long)(
                                                             (int)(- p_9) + 985)) {
    v_7 = (int)(! (v % ((unsigned long long)-4971546624.f + 74ULL)) / (unsigned long long)(
                ((unsigned long)v_7 % (v_5 + 551UL)) * (unsigned long)v_17 + 46UL));
    v_7 = (int)(! ((unsigned int)v_7 * v_13) - 3345413622U * (unsigned int)v_15);
    v = (unsigned long long)(! p_11);
  }
  while_0_break: ;
  result = ((v << ((int)p & 63)) - (v | 26106ULL)) % (unsigned long long)(
           ((v_5 - 4294962357UL) << (! v_5 & 31UL)) + 567UL);
  return result;
}


