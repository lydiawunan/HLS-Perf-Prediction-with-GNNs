#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 891912610
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, unsigned char p_4, unsigned short p_7,
                short p_9, signed char p_13)
{
  signed char v_23;
  unsigned long v_21;
  unsigned long v_19;
  signed char v_17;
  int v_15;
  int v_11;
  int v;
  signed char result;
  v_23 = (signed char)p;
  v_21 = 333405245UL;
  v_19 = (unsigned long)p_7;
  v_17 = p_13;
  v_15 = -511654893;
  v_11 = 43395;
  result = (signed char)121;
  while ((long)v_15 - -42869L * (long)(- v_17) == (long)(~ p_4)) {
    v_19 = (unsigned int)v_23 - 4294942750U;
    v_19 = (v_19 + 31349UL) * (unsigned long)(~ p_4) - 61554UL;
    v_23 = (signed char)(- (! ((int)p_4 / ((int)p_13 + 1000))));
    v_15 = (int)(197.34703064f * (float)(! ((int)p_4 % ((int)((unsigned char)-8.69355795757e+37f) + 720))));
  }
  while_0_break: ;
  if ((unsigned long long)((unsigned long)(- p_13) | ((unsigned long)(
                                                      (long)v_17 - 12531888L) - (unsigned long)(~ p))) < (
      - (909533956ULL + (unsigned long long)v_19) | ((unsigned long long)(~ v_21) + (
                                                     (unsigned long long)v_15 ^ 18446744073709496321ULL)))) 
    result = (signed char)(- (- p + 192U));
  else {
    v_11 = v_15 & ~ v_11;
    v = (int)(~ (((long)v_11 - 8947L) & (long)((int)result % ((int)p_13 + 695))));
    result = (signed char)((11000 ^ (int)p_4) - (109 & v) / (((int)p_7 - (int)p_9) + 169));
  }
  return result;
}


