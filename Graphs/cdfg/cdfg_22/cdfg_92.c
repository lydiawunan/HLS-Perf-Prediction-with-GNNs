#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 80478057
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, int p_5, unsigned long long p_9, long long p_17,
                   int p_19)
{
  char v_21;
  double v_15;
  unsigned long long v_13;
  unsigned long v_11;
  long v_7;
  double v;
  unsigned short result;
  v_21 = (char)p_19;
  v_15 = -5727727072.81;
  v_13 = (unsigned long long)p_19;
  v_11 = 390883836UL;
  v_7 = (long)p_17;
  v = (double)p_17;
  result = (unsigned short)10896;
  while (! ((unsigned long long)p_5 / (((unsigned long long)result + p_9) + 1007ULL)) > (unsigned long long)(
         p_17 | (long long)(~ (v_11 >> (p_19 & 31))))) {
    v_21 = (int)v_21 + 919545640;
    result = (unsigned short)-3.06147903137e+38f;
    v_13 = (unsigned long long)((long long)(- (35812 & p_5)) % (- ((long long)v_15 + 14886LL) + 946LL));
    v_11 = (unsigned long)p_5;
  }
  while_0_break: ;
  while ((double)((unsigned long long)((double)((int)p - (int)result) * - v) | 
                  (unsigned long long)((int)((unsigned short)-1.05394925075e+38f) + (int)result) % 551983724015501ULL) != 
         (double)((unsigned long long)p_5 - ((unsigned long long)v_7 - p_9)) * v) {
    v_15 = v_13 * (unsigned long long)-942.762390137f;
    result = (unsigned short)v_15;
    v_13 = (unsigned long long)((long long)(! (~ v_11)) % (3404096809LL / (
                                                           (674641631LL + (long long)p) + 102LL) + 138LL));
    v = (double)(short)-9895;
  }
  while_0_break_0: ;
  return result;
}


