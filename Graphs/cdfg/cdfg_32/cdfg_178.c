#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 471105374
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, double p_11, long p_13, short p_17,
                   signed char p_21)
{
  unsigned short v_25;
  float v_23;
  unsigned long v_19;
  unsigned long long v_15;
  short v_9;
  char v_7;
  unsigned int v_5;
  char v;
  unsigned short result;
  v_25 = (unsigned short)44530;
  v_23 = -189927984.f;
  v_19 = (unsigned long)p_17;
  v_15 = 18446744073709515257ULL;
  v_9 = p_17;
  v_7 = (char)-68;
  v_5 = 3475844820U;
  result = (unsigned short)38563;
  while ((unsigned long long)(- ((int)(- p_21) >> ((unsigned long)p_11 % (
                                                   v_19 + 160UL) & 7UL))) > 
         ! (v_15 % (unsigned long long)((int)p_17 + 413)) / 18446744073709527917ULL) {
    v_23 = (int)v_25 % ((int)((char)v_23) / -123 + 316);
    v_7 = (char)p_17;
    v_15 = (unsigned long long)(! p_21) * p;
    v_15 = (unsigned long long)((-117. - p_11 * (double)v_15) / 6064998725.25);
  }
  while_0_break: ;
  if ((unsigned long long)(! (98L & p_13)) * (p + v_15 / (unsigned long long)(
                                                  (int)result + 742)) > (unsigned long long)(
      ((unsigned long)p_17 - ! v_19) >> ((unsigned long)p_13 / ((unsigned long)v_5 / (
                                                                v_19 + 876UL) + 431UL) & 31UL))) {
    v_5 = (unsigned int)v_9;
    v = (char)((45U + ! v_5) * (unsigned int)v_7);
    result = (unsigned short)((unsigned long long)((int)(! v) - 131) - p);
  }
  else result = (unsigned short)p_11;
  return result;
}


