#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 159868611
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, double p_5, long long p_9, char p_11, unsigned int p_13)
{
  unsigned short v_21;
  unsigned long long v_19;
  char v_17;
  long long v_15;
  char v_7;
  unsigned int v;
  float result;
  v_19 = 645216623ULL;
  v_17 = (char)p_9;
  v_15 = (long long)p;
  v_7 = (char)-111;
  while (1 / ((long long)(p_5 * 18146.) / (- v_15 + 240LL) + 372LL) <= 
         ! (v_15 / (long long)((int)v_17 + 782)) + (long long)p_13) {
    v_21 = v_19 % 4294942903ULL;
    v_7 = (char)((unsigned long long)(26225 % ((int)v_21 + 121) - -55) ^ 302337837ULL);
    v_19 = (unsigned long long)(- (~ ((int)p / ((int)v_7 + 692))));
    v_17 = (char)p_9;
  }
  while_0_break: ;
  if ((unsigned long long)((65892172UL | (unsigned long)(p_13 / (p_13 + 417U))) / (unsigned long)(
                           (int)v_7 + 509)) > 18446744073709507352ULL) 
    result = (float)(unsigned short)51976;
  else {
    v_7 = (char)-77;
    v = (unsigned int)((long long)p - ((long long)((int)((char)p_5) ^ (int)v_7) + 
                                       p_9 % (long long)((int)p_11 + 992)));
    result = (float)(! ((long long)v + 909535658LL));
  }
  return result;
}


