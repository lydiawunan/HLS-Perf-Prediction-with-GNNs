#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 335628430
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, unsigned short p_5, signed char p_7)
{
  unsigned int v_23;
  unsigned long long v_21;
  unsigned long v_19;
  long v_17;
  unsigned long long v_15;
  unsigned char v_13;
  char v_11;
  unsigned long v_9;
  long v;
  signed char result;
  v_23 = (unsigned int)p_5;
  v_21 = 18446744073709504964ULL;
  v_19 = (unsigned long)p_7;
  v_17 = (long)p_7;
  v_15 = (unsigned long long)p_5;
  v_13 = (unsigned char)p_5;
  v_11 = (char)p_7;
  v = (long)(((unsigned long long)v_13 - (- v_15 | (unsigned long long)-707.176849884)) + 
             ((unsigned long long)((unsigned long)v_17 % (v_19 + 102UL)) / (
              v_21 % (unsigned long long)(v_23 + 327U) + 38ULL)) % ((
                                                                    (unsigned long long)(~ p_5) & ! v_21) + 788ULL));
  v_9 = (unsigned long)(-261210708LL / (long long)((int)v_11 + 585));
  result = (signed char)(! (- ((unsigned long)(v + (long)p_5) + v_9)));
  result = (signed char)((unsigned long)p % (((0 - (unsigned long)(v * (long)p_5)) - (unsigned long)(~ (
                                              (int)result + (int)p_7))) + 928UL));
  return result;
}


