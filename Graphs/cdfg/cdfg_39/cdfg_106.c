#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 244435624
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, long long p_5, int p_7, unsigned int p_9[5][5],
          unsigned int p_11)
{
  unsigned short v_21;
  unsigned short v_19;
  long v_17;
  unsigned long v_15;
  unsigned long long v_13;
  short v;
  short result;
  v_21 = (unsigned short)p_11;
  v_17 = (long)p;
  v_15 = (unsigned long)p;
  v = (short)-7639;
  result = (short)-18254;
  if ((long)result != ~ (((long)p | v_17) & (long)(~ result))) {
    result = (short)((- v_15 + 46155UL) % (unsigned long)((int)p + 985));
    v_13 = (unsigned long long)(((unsigned long)(p_11 + 198U) + (unsigned long)v_17) / 31UL);
    v_15 = 6684UL;
  }
  else {
    v_13 = (unsigned long long)p;
    v_19 = (unsigned short)p_11;
    v_17 = (long)((long long)(! ((int)v_19 + (int)v_21)) & ((long long)(
                                                            36122U & (unsigned int)v) + (
                                                            p_5 & 7192LL)));
  }
  if (3314145468UL * ((unsigned long)p_11 & v_15) + (unsigned long)(- (
      13831U | (unsigned int)result)) <= (unsigned long)(((long)result + v_17) * -27643L)) 
    result = (short)(! p);
  else {
    v = (short)(4294909710ULL % ((v_13 - (unsigned long long)p_5) % (unsigned long long)(
                                 ((int)result + (int)((short)-7.08765840577e+37)) + 917) + 287ULL));
    v = v;
    result = (short)(((long long)(~ v) / (~ p_5 + 672LL)) * (long long)(
                     (unsigned int)p_7 % (p_9[4][3] + 1004U) + p_11 * (unsigned int)-543.743691865));
  }
  return result;
}


