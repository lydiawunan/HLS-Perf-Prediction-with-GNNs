#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 94522628
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, double p_5[3][4], unsigned long long p_7[3],
         unsigned int p_9)
{
  char v_21;
  long v_19;
  unsigned short v_17;
  signed char v_15;
  short v_13;
  short v_11;
  long v;
  long result;
  v_21 = (char)p_5[0][3];
  v_19 = 58097L;
  v_17 = (unsigned short)60202;
  v_15 = (signed char)p;
  v_13 = (short)-9237;
  v_11 = (short)-18273;
  v = 946161656L;
  result = -597587000L;
  if ((unsigned int)v_21 != (unsigned int)(17784 * (int)(! v_11)) % (
                            ((unsigned int)(- p) + 21117U / (p_9 + 393U)) + 974U)) {
    v_13 = (short)(! p_9);
    v_17 = (unsigned short)(- p_7[0]);
    v = (long)(~ (~ p));
  }
  else {
    result = (long)v_21;
    v_11 = v_11;
    v_19 = (long)(! ((unsigned int)((int)v_13 % -117) / (((unsigned int)v_15 - p_9) + 538U)));
  }
  while ((unsigned long long)(! v * (long)((double)p * p_5[2][0] + (double)(
                                           460589066ULL & p_7[0]))) > 
         (unsigned long long)p_9 % (~ ((unsigned long long)v_11 + 55357ULL) + 492ULL)) {
    v = (long long)v_17 - ((long long)v_15 + -186068519LL);
    v_17 = (unsigned short)v_21;
    v_15 = (signed char)(0ULL / (18446744073305611211ULL % (p_7[0] + 738ULL) + 942ULL) >> (
                         (long)(~ v_13) % (v_19 + 57L) & 63L));
    v_11 = (short)(! ((unsigned long)p_9 - 4294935963UL));
  }
  while_0_break: ;
  return result;
}


