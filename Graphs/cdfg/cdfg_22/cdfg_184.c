#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 526172692
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, unsigned long p_15,
                       unsigned long p_17, short p_19)
{
  unsigned char v_23;
  unsigned short v_21;
  short v_13;
  unsigned short v_11;
  char v_9;
  long long v_6;
  unsigned short v_4;
  int v;
  unsigned long long result;
  v_23 = (unsigned char)150;
  v_13 = (short)p_17;
  v_11 = (unsigned short)8632;
  v_9 = (char)-100;
  v_6 = 187114926LL;
  v_4 = (unsigned short)233;
  v = 449899032;
  result = 11687ULL;
  while ((unsigned long long)(((int)v_11 * 76 >> ((v << (p_15 & 31UL)) & 31)) / 40) <= 
         (- result + (result - (unsigned long long)p_19)) / (unsigned long long)(
         ((unsigned long)(v * (int)v_11) - p_17 % (unsigned long)((int)p_19 + 786)) + 660UL)) {
    v_21 = (int)v_23 ^ 141;
    v_23 = (unsigned char)(v >> ((60759UL % (p_15 + 467UL) - (unsigned long)(
                                  (int)p - (int)v_21)) & 31UL));
    v_21 = (unsigned short)(- ((unsigned long)v_23 / (p_15 + 434UL)) - 3259166184UL);
    v = (int)(- ((long long)(- v_21) - (v_6 + (long long)v_23)));
  }
  while_0_break: ;
  while ((unsigned long long)((long long)(~ ((unsigned int)v * 56617U)) * (
                              (long long)((double)v_4 * -6906406255.23) / (
                              (v_6 >> ((int)p & 63)) + 685LL))) <= (unsigned long long)v_9 / (
                                                                   ~ (
                                                                   (unsigned long long)v_11 & 18446744073030052119ULL) + 61ULL)) {
    v_13 = (unsigned long)v_13 - 41728UL;
    v_9 = (char)(((11205UL ^ p_15) - ! p_17) % (unsigned long)(~ ((int)p_19 & (int)v_9) + 946));
    v_4 = (unsigned short)(! -387544049L);
    v = - (~ ((int)p * (int)p));
  }
  while_0_break_0: ;
  return result;
}


