#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 914513137
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned int p, char p_7, char p_9)
{
  unsigned short v_19;
  unsigned char v_17;
  long long v_15;
  short v_13;
  long v_11;
  long long v_4;
  int v;
  short result;
  v_17 = (unsigned char)114;
  v_15 = 636141724LL;
  v_13 = (short)19362;
  v_11 = -18512L;
  v_4 = (long long)p_7;
  v = -50228;
  while ((unsigned long long)(((unsigned long)((unsigned int)p_7 ^ p) ^ 4294922318UL) + (unsigned long)(~ (- p_7))) == 
         (18446744073709543689ULL % ((unsigned long long)1.52490533127e+37f + 465ULL) | (unsigned long long)p_9) * (unsigned long long)v_11) {
    v_19 = (long long)v_17 * (v_15 % (long long)((int)v_13 / -46 + 672));
    v = (int)(- (~ (short)5513));
    v_13 = (short)(! (((unsigned long long)v + 814449986ULL) ^ (unsigned long long)(
                      (int)v_19 + -239)));
    v_11 = (long)(((int)p_9 & (int)(- p_9)) + (int)(~ v_13));
  }
  while_0_break: ;
  result = (short)(! (62620ULL % (unsigned long long)(v + 48)) ^ (unsigned long long)(
                   (v_4 + (long long)p) * (long long)(! p_7)));
  return result;
}


