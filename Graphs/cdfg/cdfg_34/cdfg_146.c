#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 671531409
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, short p_4, signed char p_7,
                unsigned int p_9, signed char p_11)
{
  unsigned long long v_21;
  unsigned int v_19;
  short v_17;
  int v_15;
  unsigned long v_13;
  unsigned int v;
  signed char result;
  v_19 = 4294927217U;
  v_17 = (short)p_11;
  v_15 = (int)p_9;
  v_13 = p;
  v = (unsigned int)p_4;
  result = (signed char)p;
  while (((31458ULL - (unsigned long long)p_9) + (unsigned long long)(
          v_13 & (unsigned long)result)) / (unsigned long long)(p_9 + 571U) == (unsigned long long)(
         (v - p_9) % (unsigned int)((int)p_11 + 985) & (unsigned int)v_15)) {
    v_21 = v_19 + 23042U;
    v_17 = (short)((- v_21 + (unsigned long long)((int)v_17 % ((int)p_4 + 10))) / (
                   (v_21 ^ (unsigned long long)(~ p_9)) + 683ULL));
    v_13 = (unsigned long)(! (~ ((int)p_7 - (int)p_11)));
    v_15 = (int)(45972410UL / (v_13 + 506UL));
  }
  while_0_break: ;
  while ((unsigned long)v * 4294931902UL >= (unsigned long)(((unsigned int)p_7 + 
                                                             v % (p_9 + 186U)) * (unsigned int)p_11)) {
    v_15 = (unsigned long)v_15 + v_13 * 21920UL;
    v_13 = (unsigned long)(- ((int)(! p_7) + (int)(! p_7)));
    result = (signed char)(0.f - - ((float)p_4 + -964.373413086f));
    v = (unsigned int)(- (- 4.61987513973e+37));
  }
  while_0_break_0: ;
  return result;
}


