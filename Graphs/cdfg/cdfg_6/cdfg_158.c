#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 746660723
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p, unsigned char p_4, double p_7,
        unsigned int p_9, unsigned long p_11)
{
  long v_17;
  int v_15;
  long long v_13;
  long v;
  int result;
  v_17 = -1001930586L;
  v_15 = (int)p;
  v_13 = 950330701LL;
  result = (int)p_11;
  v = 861813761L;
  while (((p << ((int)p_4 & 63)) * (unsigned long long)((double)v + p_7)) % (unsigned long long)(
         (long long)((unsigned long)p_9 + p_11) % (-10988LL / (v_13 + 317LL) + 987LL) + 561LL) >= 
         (unsigned long long)(! ((unsigned int)v_15 / (p_9 + 155U))) + 
         18446744072865803899ULL * (unsigned long long)v_15) {
    v_17 -= -20890L;
    v_13 = (long long)(99U % (p_9 + 254U));
    result = (int)p_4 % ((int)(- p_7) / (24844 / ((int)((short)p_7) + 55) + 885) + 332);
    v = (long)((unsigned long)result / (- ((unsigned long)v_15 % (p_11 + 93UL)) + 683UL));
  }
  while_0_break: ;
  return result;
}


