#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 548242123
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, unsigned long p_4, unsigned long long p_15,
                long p_17[1][1][3], char p_21)
{
  char v_23;
  char v_19;
  unsigned int v_13;
  unsigned long v_11;
  unsigned long long v_9;
  short v_7;
  unsigned long v;
  signed char result;
  v_23 = p_21;
  v_19 = (char)p_17[0][0][2];
  v_13 = 3846966929U;
  v_7 = (short)p_17[0][0][2];
  v = 4058127465UL;
  result = (signed char)p;
  while (((unsigned long long)(p_4 - (unsigned long)v_13) * - p_15) * (unsigned long long)(
         (unsigned long)result % ((p_4 >> (p_4 & 31UL)) + 419UL)) == (unsigned long long)(! (~ (
         p_17[0][0][1] % (long)((int)result + 143))))) {
    v_19 = (int)v_19 / -28973;
    result = (signed char)(~ ((int)v_7 % ((int)p_21 + 615)));
    v = - (120UL % (v + 48UL));
    result = (signed char)(((unsigned long)result % (p + 860UL) & (unsigned long)p_17[0][0][0] / (
                                                                  p + 428UL)) % (unsigned long)(
                           (((int)p_21 >> ((int)v_7 & 7)) & (int)result * (int)v_23) + 656));
  }
  while_0_break: ;
  while (- ((unsigned long)((int)result + 56110) * (20607UL * p)) >= p_4) {
    v = (unsigned long long)v | 18446744073709517596ULL;
    v_11 = 4294935897UL;
    v_9 = (unsigned long long)(! ((unsigned long)v_7 + p) * ((p_4 - p) + 
                                                             5143UL % (
                                                             p_4 + 265UL)));
    result = (signed char)(- (! v_9 / (unsigned long long)((v_11 << (
                                                            (int)result & 31)) + 786UL)));
  }
  while_0_break_0: ;
  return result;
}


