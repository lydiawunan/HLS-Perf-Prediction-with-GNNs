#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 366154100
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, unsigned int p_4, double p_6, char p_8,
         int p_10[1][3][1])
{
  char v_21;
  unsigned long long v_19;
  short v_17;
  long v_15;
  unsigned char v_13;
  unsigned short v;
  long result;
  v_21 = (char)p_10[0][1][0];
  v_19 = (unsigned long long)p_10[0][1][0];
  v_17 = (short)p_6;
  v_15 = -43857L;
  v_13 = (unsigned char)p_4;
  v = (unsigned short)3904;
  while ((unsigned long)(- (4294948711U + (unsigned int)v_13)) - (unsigned long)(
         (long)p_8 - (v_15 & (long)v_17)) >= 86UL) {
    v_13 = (unsigned long long)v_21 + v_19 / 2810734999ULL;
    v_17 = (short)(! 3441805040U);
    v = (unsigned short)117;
    v_15 = (long)p_10[0][2][0];
  }
  while_0_break: ;
  if ((unsigned long)p_8 > (unsigned long)((long)(156 | p_10[0][0][0]) % (
                                           (long)v % -546014166L + 405L)) % (
                           ((unsigned long)((unsigned int)p_6 >> (p_4 & 31U)) + 
                            (unsigned long)p_10[0][0][0] * 385521967UL) + 612UL)) 
    result = (long)((4294950034U + p) - p_4);
  else result = (long)(217 * (int)((unsigned char)p_6));
  return result;
}


