#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 888496980
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, int p_7[1][3], unsigned long p_9[3][2][4],
                   unsigned short p_17, long p_19)
{
  int v_25;
  signed char v_23;
  unsigned short v_21;
  short v_15;
  char v_13;
  char v_11;
  unsigned long long v_4;
  int v;
  unsigned short result;
  v_25 = (int)p;
  v_23 = (signed char)102;
  v_21 = (unsigned short)p_19;
  v_15 = (short)p_7[0][2];
  v_13 = (char)-58;
  v_11 = (char)-123;
  v_4 = (unsigned long long)p_17;
  v = 97422736;
  result = (unsigned short)26219;
  while (((p_9[1][1][0] + (unsigned long)p_17) % 59096UL ^ (unsigned long)(
          (int)v_21 / ((int)((unsigned short)1.16030787423e+38f) + 278))) != (unsigned long)(
         (long)(! v_13) % ((long)p_17 % (p_19 + 189L) + 988L) - (long)((int)(! v_15)))) {
    v_25 = (unsigned int)v_25 + 4294940159U;
    v_11 = (char)(((long)v_23 - 33227L) / (long)(((int)result - (int)v_11) + 353) >> 15L);
    v_21 = (unsigned short)p_9[2][0][3];
    v_15 = (short)((unsigned int)(v + -30266) - (3853478893U + (unsigned int)(
                                                 51 | (int)p_17)));
  }
  while_0_break: ;
  while ((unsigned long long)(! (v >> ((int)result & 31))) + ~ (0ULL - v_4) > (unsigned long long)(
         (unsigned long)(- ((int)p / (p_7[0][2] + 42))) % (((unsigned long)p_7[0][0] * p_9[0][0][0]) % (
                                                           ~ p_9[0][1][3] + 126UL) + 1020UL))) {
    v = (int)v_11 / 31025;
    v_11 = (char)(~ p_19);
    v_15 = (short)(v_4 & (unsigned long long)(((int)p / -19) % ((p_7[0][0] + (int)p_17) + 853)));
    result = (unsigned short)((long long)v_15 ^ (912023873LL - (long long)result) % (long long)(
                                                ((int)p ^ (int)v_13) + 451));
  }
  while_0_break_0: ;
  return result;
}


