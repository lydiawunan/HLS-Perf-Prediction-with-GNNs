#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 534600307
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p, char p_7, unsigned long long p_11,
                 unsigned long p_13, char p_17)
{
  char v_23;
  short v_21;
  unsigned int v_19;
  short v_15;
  signed char v_9;
  unsigned int v_5;
  unsigned long long v;
  unsigned int result;
  v_23 = (char)p;
  v_21 = (short)-14464;
  v_19 = 61874U;
  v_9 = (signed char)p_11;
  v_5 = 49426283U;
  result = 22042U;
  if ((unsigned long)(~ ((unsigned int)(~ p_17) - v_5)) == (unsigned long)v_23 / (
                                                           ~ (16707UL / (
                                                              p_13 + 207UL)) + 387UL)) {
    v = 4360037011ULL % (unsigned long long)((int)v_21 + 994) - (unsigned long long)(~ (
        p - (long long)result));
    v_15 = (short)(- (~ ((unsigned long long)result % (p_11 + 230ULL))));
    v_19 = (unsigned int)(0ULL - - (~ p_11));
  }
  else {
    v = (unsigned long long)p;
    v_9 = (signed char)(~ (p_11 - 16791ULL));
    v_15 = (short)((unsigned long)(! v_9) / (~ (p_13 + (unsigned long)v_9) + 558UL));
  }
  if ((v | (unsigned long long)(- v_5)) % ((unsigned long long)p_7 * (
                                           (unsigned long long)v_9 + p_11) + 498ULL) <= (unsigned long long)(
      (! p_13 + (unsigned long)((int)v_15 % ((int)p_17 + 619))) | (unsigned long)v_19)) 
    result = (unsigned int)(! (unsigned char)241);
  else result = (unsigned int)(- p);
  return result;
}


