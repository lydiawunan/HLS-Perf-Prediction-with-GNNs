#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 201214944
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, unsigned long long p_7, double p_11[3], char p_13,
                   unsigned int p_15)
{
  unsigned char v_25;
  long long v_23;
  long long v_21;
  double v_19;
  float v_17;
  unsigned int v_9;
  unsigned long v_4;
  signed char v;
  unsigned short result;
  v_25 = (unsigned char)90;
  v_23 = (long long)p_15;
  v_21 = 40683LL;
  v_19 = 1.25409023629e+38;
  v_17 = 120.605247498f;
  v_9 = 5078U;
  v = (signed char)p_11[1];
  while ((unsigned long long)(((float)(v_9 / 8U) - v_17) * (float)(((int)p_13 - (int)v) % (
                                                                   (int)(
                                                                   -2999680000.f * v_17) + 43))) > 
         (unsigned long long)((unsigned long)(p_15 - (unsigned int)p) % 38250UL) - (
         (unsigned long long)(v_21 - v_21) & (unsigned long long)p_13 * 18446744073709516181ULL)) {
    result = v_23 % 62LL;
    v_9 = (unsigned int)(~ (char)-95);
    v_23 = (long long)result;
    v_21 = (long long)((int)v_25 % (! ((int)p_13 / ((int)p + 246)) + 246));
  }
  while_0_break: ;
  if ((p_7 / (unsigned long long)(v_9 + 322U) - (unsigned long long)(
       (int)((char)p_11[1]) >> ((int)p_13 & 7))) % ((unsigned long long)(
                                                    ((float)p_15 - v_17) / (
                                                    (float)((int)((short)v_19) * -13981) + 648.f)) + 471ULL) == (unsigned long long)p) {
    v_4 = 240UL;
    v = (signed char)v_4;
    result = (unsigned short)(- (~ ((unsigned long)v - 3297329096UL)));
  }
  else result = (unsigned short)(~ (0 % (-123145061 / ((int)p + 983) + 673)));
  return result;
}


