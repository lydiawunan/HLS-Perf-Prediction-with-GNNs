#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 906655578
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, unsigned long long p_4, signed char p_6[5],
         char p_11, unsigned long p_23)
{
  short v_25;
  long long v_21;
  unsigned long long v_19;
  unsigned long long v_17;
  signed char v_15;
  unsigned short v_13;
  char v_9;
  unsigned long v;
  long result;
  v_25 = (short)13578;
  v_21 = 913430780LL;
  v_15 = (signed char)103;
  v_9 = (char)p_6[0];
  v = (unsigned long)p_11;
  v_19 = (unsigned long long)v_25;
  if ((long long)(~ (-547211598 + (int)p) + 1046563318 * (int)p) > (! v_21 + (long long)(
                                                                    p_23 + (unsigned long)v_9)) >> (
                                                                   (int)p_6[2] & 63)) {
    v_9 = p_11;
    result = 938469608L;
    result = (long)(((unsigned long long)(result + (long)p) * (p_4 % (unsigned long long)(
                                                               (int)p_6[1] + 398))) % (unsigned long long)(
                    ((v - (unsigned long)v_9) - (unsigned long)-8.29508731691e+37) + 355UL));
  }
  else {
    v_13 = (unsigned short)v_19;
    v_17 = (unsigned long long)(! (! (! -26579L)));
    result = (long)(~ ((unsigned long long)((int)v_13 >> ((int)v_15 & 15)) + 
                       v_17 / 22947ULL));
  }
  return result;
}


