#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 249053287
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p, unsigned long p_4, long long p_7,
                   short p_11, long long p_13)
{
  unsigned short v_19;
  long v_17;
  char v_15;
  long long v_9;
  unsigned long long v;
  unsigned short result;
  v_19 = (unsigned short)p_7;
  v_17 = (long)p_11;
  v_15 = (char)((18446744073121454986ULL - (unsigned long long)v_17) % (unsigned long long)(
                (long long)v_19 + 148LL));
  v_9 = p_7 >> ((int)v_15 & 63);
  v = (unsigned long long)(90LL * ~ ((v_9 + (long long)p_11) / (~ p_13 + 102LL)));
  result = (unsigned short)((((unsigned long)p ^ 424768313UL % (p_4 + 320UL)) + p_4) / (
                            (unsigned long)((double)(- v / 19ULL) * (
                                            139.266654683 - (double)p_7)) + 1003UL));
  return result;
}


