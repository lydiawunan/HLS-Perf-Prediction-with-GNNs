#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 945216711
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long p, unsigned short p_5, unsigned char p_13,
                       unsigned char p_15, int p_21)
{
  unsigned long long v_23;
  short v_19;
  unsigned short v_17;
  short v_11;
  unsigned char v_9;
  long v_7;
  unsigned short v;
  unsigned long long result;
  v_23 = (unsigned long long)p_13;
  v_19 = (short)p_15;
  v_17 = (unsigned short)26872;
  v_11 = (short)-19182;
  v_7 = p;
  v = (unsigned short)p_21;
  result = 18446744073340787406ULL;
  v_9 = (unsigned char)72;
  while ((unsigned long long)(40176UL + (unsigned long)p) % (result + 819ULL) != 
         ((unsigned long long)v & 18446744073709491389ULL) / (- ((unsigned long long)p_5 % 23366ULL) + 42ULL)) {
    v_7 /= 15645L;
    result = (unsigned long long)(((int)p_15 + (int)v_9) - 13291) + (unsigned long long)p_21 % (
                                                                    (
                                                                    v_23 & 527123693ULL) + 634ULL);
    v_9 = (unsigned char)((int)v_19 % (~ ((int)v_11 * (int)p_15) + 764));
    v = (unsigned short)(! ((int)p_13 - (int)p_15) - (int)v_17 * (int)p_15);
  }
  while_0_break: ;
  return result;
}


